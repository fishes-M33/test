#include<stdio.h>
int main()
{
	int k,i,j,m,n,l,c,d,e,o,p;
	int a[100],b[100]; 
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);//存储输入的几组数字 
	}
char	p0[8][6]={"*****", "*   *",  "*   *",  "*   *" ,"*   *", "*   *","*****"};
	
char	p1[8][6]={"    *", "    *",  "    *",  "    *" ,"    *","    *", "    *"};
	
char	p2[8][6]={"*****", "    *",  "    *",  "*****" ,"*    ","*    ", "*****"};
	
char	p3[8][6]={"*****", "    *",  "    *",  "*****" ,"    *", "    *","*****"};
	
char	p4[8][6]={"*   *", "*   *",  "*   *",  "*****" ,"    *", "    *","    *"};
	
char	p5[8][6]={"*****", "*    ",  "*    ",  "*****" ,"    *", "    *","*****"};

char	p6[8][6]={"*****", "*    ",  "*    ",  "*****" ,"*   *", "*   *","*****"};

char	p7[8][6]={"*****", "    *",  "    *",  "    *" ,"    *", "    *","    *"};
	
char    p8[8][6]={"*****", "*   *",  "*   *",  "*****" ,"*   *", "*   *","*****"};
	
char	p9[8][6]={"*****", "*   *",  "*   *",  "*****" ,"    *", "    *","*****"};
	
		for(i=0;i<k;i++)//从第一个数字历遍 
	{m=0;
	  j=a[i];//把每一位数字拿出来赋给j
	     printf("%d:\n",j);
	     
	  while(j>0)
	  {
	  	b[m]=j%10;
	  	j/=10;
	  	m++;      //把一个数字的每一位存到数组b中,从b[0]存到b[m-1] 
			}	  
	  
	   for(n=0;n<7;n++)   //一行一行的来 
	   {
	   	for(c=m-1;c>=0;c--)//从第一位开始 
		{
	    if(b[c]==0)
		   printf("%s  ",p0[n]) ;
		if(b[c]==1)
		   printf("%s  ",p1[n]) ;
	   	if(b[c]==2)
		   printf("%s  ",p2[n]) ;
	   	if(b[c]==3)
		   printf("%s  ",p3[n]) ;
	   	if(b[c]==4)
		   printf("%s  ",p4[n]) ;
	   	if(b[c]==5)
		   printf("%s  ",p5[n]) ;
	   	if(b[c]==6)
		   printf("%s  ",p6[n]) ;
	   	if(b[c]==7)
		   printf("%s  ",p7[n]) ;
	   	if(b[c]==8)
		   printf("%s  ",p8[n]) ;
	   	if(b[c]==9)
		   printf("%s  ",p9[n]) ;
	   	
	   	
         }
         printf("\n");
		} 
	
	} 
	
	
	
	
	
	
	
	
	return 0;
 } 
