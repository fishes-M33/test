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

 
for(i=1;i<10;i++)//�ȴ�һ�����λ���� 
{  
  if(n[i]!=0) 
  {
    printf("%d",i); 
    j=i;//��¼������һλ 
  } 
 break;
}
 
for(i=0;i<10;i++)//��С������� 
{
  if(n[i]!=0)//�ж��ǲ�������һ������ 
  
  {
  	if(i!=j){//�ж���������ǲ���֮ǰ����� 
	  
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
 
	

