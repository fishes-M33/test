#include<stdio.h>
int main()
{
	int i,j,k,m=1,n=0,l,o,p,q,count=0;
	int a[10000]={0};
	int num[100]={0};
	int f[100]={0};

	a[0]=2;

	for(i=3;i<=10000;i++)//�ж��ǲ��������ı���
	{ count=0;
	  for(j=2;j<i;j++) //ÿ���������жϴ��� ��2���������ȥ1
	   {
		if(i%j==0)   count++;
	   }
	if(count==0)    { a[m]=i;m++; }
	}

	  scanf("%d",&k);
	for(i=0;i<k;i++)
  {
  scanf("%d",&num[i]);//��num[0]��[k-1]һ��k����
  }
	//���
	for(i=0;i<k;i++)//��ÿһ���������ó�������
	{
	  o=num[i];//������o
	  j=0;
	  while (a[j]<=o)
	  {
	    for(j=0;a[j]<=o;j++)
	  	{
		   if(o%a[j]==0)
		   {o=o/a[j];
	  	   f[n]=a[j];
	  	   n++;
           break;
           }
        }
      }
	   for(p=0;p<n-1;p++)
	   {printf("%d*",f[p]);
		}
		printf("%d\n",f[p]);
	n=0;
	}
	return 0;
 }

