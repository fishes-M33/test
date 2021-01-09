#include<stdio.h>
#include<string.h>
int main(){
int n[10]={0};
int num[100]={0}; 
int i,j,k,l,m,a=0,b,c;

for(i=0;i<10;i++){

scanf("%d",&n[i]);
a=a+n[i]; 
}


if(a>50)
return 0; 

 
for(i=1;i<10;i++)//先打一个最高位出来 
{  
  if(n[i]!=0) 
  {
    printf("%d",i); 
    j=i;//记录下是哪一位 
  } 
 break;
}
 
for(i=0;i<10;i++)//从小到大输出 
{
  if(n[i]!=0)//判断是不是有这一个数字 
  
  {
  	if(i!=j){//判断这个数字是不是之前打过的 
	  
	  for(k=0;k<n[i];k++)
	  {printf("%d",i);
	   } 
  	
  	}
	  
	  else{
	  	
	  for(k=0;k<n[i]-1;k++)
	  {printf("%d",i);
	   } 	
	  } 
  	
  	
  	
  }}	
	
	
return 0;	
	
 } 
 
	

