#include<stdio.h>
#include<math.h>
int main()
{
	int T,m[100],n[100];
	int a,b[100],c=0,d,e,i,k,j,l,num,judge=0;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{scanf("%d %d",&m[i],&n[i]);//��С���ֱ������������
	}
	for(i=0;i<T;i++)//�ܹ�������� 
	{  
	   for(a=m[i];a<=n[i];a++)//һ�������ѭ�� 
	   {  
	      num=a;
	      l	=sizeof(num);
	      for(j=0;j<l;j++)//һ�������ж� 
		     {
		     	b[j]= (num % 10);//b[0]�Ǹ�λ 
		     	num/=10;
		     	c=c+pow(b[j],3);//��ÿλ�ϵ����η�����c 
		     }
		     if(c==a)
		     {judge=1;
	        	printf("%d ",c)  ;
	         }
		c=0;
		} 
		if(judge==0)
		printf("-1");
		printf("\n");
		}
	
	
	
	
	return 0;
}
