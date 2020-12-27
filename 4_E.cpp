#include<stdio.h>
#include<string.h>
int main()
{
   char x[1000]={" "};
char m[1000][1000]={" "};
int i,j=0,k=0,a,b,l,c=-1;

fgets(x,1000,stdin);

l=strlen(x);
printf("%d\n",l);

for(i=0;i<l-1;i++)//把每一个字符循环一遍
{       if(('a'<=x[i]&&x[i]<='z')||('A'<=x[i]&&x[i]<='Z'))
    {  m[j][k]=x[i]; k++; }
    else 
    {j++;k=0;
    if(x[i]!=' '&&x[i]!='\0')
   m[j][k]=x[i];
   j++;k=0; }
}

for(a=0;a<=j;a++)
  { for(b=100;b>=0;b--)
{
if (m[a][b]!=' '&&m[a][b]!='\0')
   {if (('a'<=m[a][b]&&m[a][b]<='z')||('A'<=m[a][b]&&m[a][b]<='Z'))
    printf("%c",m[a][b]);
    else
   {if (m[a][c+1]!=' '&&m[a][c+1]!='\0')
   {
   for (;;)
      {
      printf("%c",m[a][c+1]);
	  c++;
	  if (m[a][c+1]==' ')
	  break;}}break;
   }
    }
}
printf(" ");
}

    return 0;
}
