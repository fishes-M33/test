#include<stdio.h>
#include<string.h>
int main(){
int h,r,c,i,j,d,e,n,f,q;
int k1,k2,k3,k4,k5,k6;
int a[100][100]={00};
char m[10];

scanf("%d%d",&r,&c);
if(r>=1&&c<=50)
{for(i=1;i<r+1;i++)
{for(j=1;j<c+1;j++)
  {scanf("%d",&a[i][j]);} }}
scanf("%d\n",&n);
q=0;
while(q<n){
scanf("%s",m);

getchar();
if(m[0]=='S'&&m[1]=='R')
{scanf("%d%d",&f,&h);
 getchar();
 for(i=1;i<c+1;i++)
 {d=a[f][i];
 e=a[h][i];
 a[f][i]=e;
 a[h][i]=d;}
 }
if(m[0]=='S'&&m[1]=='C')
{scanf("%d%d",&f,&h);
 getchar();
 for(i=1;i<r+1;i++)
 {d=a[i][f];
  e=a[i][h];
  a[i][f]=e;
  a[i][h]=d;}
  }
if(m[0]=='D'&&m[1]=='R')
{scanf("%d",&f);
 getchar();
 for(j=1;j<c+1;j++)
  {for(i=f;i<r;i++)
   a[i][j]=a[i+1][j];}
r=r-1;
}
if(m[0]=='D'&&m[1]=='C')
{scanf("%d",&f);
 getchar();
 for(i=1;i<r+1;i++)
  {for(j=f;j<c;j++)
   a[i][j]=a[i][j+1];}
c=c-1;
}
if(m[0]=='I'&&m[1]=='R')
{scanf("%d",&f);
 getchar();
 for(j=1;j<c+1;j++)
  {for(i=r;i>f-1;i--)
   {a[i+1][j]=a[i][j];}
  a[f][j]=0;}
r=r+1;
}
if(m[0]=='I'&&m[1]=='C')
{scanf("%d",&f);
 getchar();
 for(i=1;i<r+1;i++)
  {for(j=c;j>f-1;j--)
   {a[i][j+1]=a[i][j+1];}
  a[i][f]=0;}
c=c+1;
}
q++;
}
for(i=1;i<r+1;i++)
 {for(j=1;j<c+1;j++)
    {printf("%d ",a[i][j]);}
    printf("\n");}
 return 0;
}


