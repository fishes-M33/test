#include<stdio.h>
#include<math.h>
int main()
{
	int T,m[100],n[100];
	int a,b[100],c=0,d,e,i,k,j,l,num,judge=0;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{scanf("%d %d",&m[i],&n[i]);//最小最大分别存在两个数组
	}
	for(i=0;i<T;i++)//总共输出次数 
	{  
	   for(a=m[i];a<=n[i];a++)//一个区间的循环 
	   {  
	      num=a;
	      l	=sizeof(num);
	      for(j=0;j<l;j++)//一个数的判断 
		     {
		     	b[j]= (num % 10);//b[0]是个位 
		     	num/=10;
		     	c=c+pow(b[j],3);//把每位上的三次方赋给c 
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
