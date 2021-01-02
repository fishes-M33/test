#include<stdio.h>
int main()
{
int n,i,k,a[100],b[100],c[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d%d%d",&a[i],&b[i],&c[i]);
}
for(i=0;i<n;i++)//先保证它是三角形!! 
{
if(a[i]*a[i]+b[i]*b[i]==c[i]*c[i]||c[i]*c[i]+b[i]*b[i]==a[i]*a[i]||a[i]*a[i]+c[i]*c[i]==b[i]*b[i])
{if(a[i]>0&&b[i]>0&&c[i]>0&&a[i]+b[i]>c[i]&&c[i]+a[i]>b[i]&&c[i]+b[i]>a[i])
printf("Yes\n");
else printf("No\n");}
else
printf("No\n");
}
return 0;
 }  
