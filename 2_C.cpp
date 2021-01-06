#include <stdio.h>
#include<string.h>
#include<math.h>
int main()
{int n,i=0,s=0,k=0,w=0;
int count=0;
scanf ("%d",&n);
while (i<n)
{
 scanf("%d",&s);
 k=s;
 while(k>0)
 {w=w*10+k%10;
 k/=10;      //ÄæÖÃµÄ¹ý³Ì 
 }
 if(w==s)
 printf("Yes");
 else
 printf("No");
 i++; w=0; 
}
return 0;}
	
	

