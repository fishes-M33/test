#include<stdio.h>

int main()
{
int n,num,x=0,y,l,j,k,i;
scanf("%d",&n);
for (i=0;i<n;i++)
{
	scanf("%d",&num);
	y=num;
	
	while	(num>0)
	{
	 	x=x*10+num%10;//¸öÎ»Êý 
	 	num/=10;
		  
	}


	if(x==y)
	printf("yes\n");
	else
		printf("no\n");
	x=0;	
	
	
}
return 0;
}

