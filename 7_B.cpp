#include<stdio.h>
int main(){
	int num[30];
	int i,j=0,k=0,l,m,n,count=1;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	} 
	
	for(i=1;i<n;i++){//�ӵڶ�������ʼ�ж��Ƿ����ظ� 
	  for(j=i-1;j>=0;j--)//����һλ��ʼ�ж��Ƿ����ظ�
	  { 
	  	if(num[i]==num[j])
	  	break;
	  	else k++;
	  }	 
	if(k==i)
	count++; 
	k=0;}
	
	printf("%d",count);
	
	
	
	
	
	
	
	return 0;
} 
