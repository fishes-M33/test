#include<stdio.h>

int main()
{
	int n,i,l,j=0,k,m=0,l1=0,l2=0,z,a,b,t;
int x[1000]={NULL};
int odd[1000]={NULL},even[1000]={NULL};

  scanf("%d",&n);
   for(z=0;z<n;z++)
{l1=0;l2=0;
  for(i=0;;i++)
    {
  	scanf("%d",&x[i]);
  
  	if(getchar()=='\n')
  	break;
  		m++;   //һ������m���� 
    }
  		for(i=0;i<m;i++)
  		{
		  if (x[i]%2==1)     //������������
         {odd[l1] =x[i];
          l1++;
        }
         else if(x[i]%2==0)
       {even[l2] =x[i];    //ż����������
        l2++;
       }
	   }m=0;	
       
for(a=0;a<l1-1;a++) //ѭ�����ٸ���
{ for(b=a+1;b<=l1-1;b++)//ÿ����ѭ�����ٴ�
  if(odd[a]>odd[b]) 
  { t=odd[a];
    odd[a]=odd[b];
    odd[b]=t;
   }
}

//ż���жϴ�С
for(a=0;a<=l2-1;a++) //ѭ�����ٸ���
{ for(b=a+1;b<=l2-1;b++)//ÿ����ѭ�����ٴ�
  if(even[a]>even[b]) 
  { t=even[a];
    even[a]=even[b];
    even[b]=t;
   }
}

for(a=0;a<l1;a++)
 
 printf("%d ",odd[a]);
for(a=0;a<l2;a++)
 printf("%d ",even[a]);
printf("\n");

}
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
