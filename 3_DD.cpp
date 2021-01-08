#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int a,b,n,i,j,high=0,low=0;
int num[20]={0};
char cha[20]={NULL};
char m[50][50]={NULL}; 
scanf("%d",&n);

for(a=0;a<n;a++)
{
scanf("%d%c",&num[a],&cha[a]);

}
for(a=0;a<n;a++)
{if (num[a]>0&&num[a]>high)
high=num[a];
 if(num[a]<0&&abs(num[a])>low)
low=abs(num[a]);
}


for (i=0;i<n;i++)
m[high][i]='-';

for(b=0;b<n;b++)
{
if (num[b]>0)
{
  if (cha[b]==' '||cha[b]=='\0'||cha[b]=='\n')     
{
    for(i=high+1;i<=high+low;i++)

       m[i][b]=' ';

    for(i=high-1;i>=high-abs(num[b]);i--)

       m[i][b]='+';

    for(i=0;i<high-abs(num[b]);i++)

       m[i][b]=' ';
}
   else 
{
      for(i=high+1;i<=high+low;i++)

       m[i][b]=' ';

    for(i=high-1;i>=high-abs(num[b]);i--)

       m[i][b]=cha[b];

    for(i=0;i<high-abs(num[b]);i++)

       m[i][b]=' ';
}
}


else if (num[b]<0)
{
  if (cha[b]==' '||cha[b]=='\0'||cha[b]=='\n')
{
    for(i=0;i<high;i++)

       m[i][b]=' ';

    for(i=high+1;i<=abs(num[b])+high;i++)

       m[i][b]='+';

    for(i=high+abs(num[b])+1;i<=high+low;i++)

       m[i][b]=' ';
}
 else
{
     for(i=0;i<high;i++)

       m[i][b]=' ';

    for(i=high+1;i<=abs(num[b])+high;i++)

       m[i][b]=cha[b];

    for(i=high+abs(num[b])+1;i<=high+low;i++)

       m[i][b]=' ';
}

}

else
{ for(i=0;i<high;i++)
    m[i][b]=' ';
 for(i=high+1;i<=high+low;i++)
    m[i][b]=' ';
}


}

for(i=0;i<=high+low;i++)
     {      if(i==high)
              {for(j=0;j<n;j++)
                        {if(j==n-1)
                          printf("%c",m[i][j]);
                        else
                          printf("%c-",m[i][j]); 
                        }    
              }
            else
              {
                 for(j=0;j<n;j++)
                 printf("%c ",m[i][j]);
              }
	
	
	printf("\n");
	
	
    } 
return 0;}
