#include<stdio.h>

int main(){
	int i,j,k,l,m=0,n;
	int num[100];
	int a[100][100]={0};

	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		scanf("%d",&num[i]);
		 
		for(j=0;j<num[i];j++)//num����ÿһ�ŵ����� 
		{
			scanf("%d",&a[i][j]) ; 
		}
	
	}

	for(i=0;i<n;i++)//ÿһ�п�ʼ 
	{
		for(j=0;j<num[i];j++)//ÿһ������
		{ for(m=j+1;m<num[i];m++)
		if(a[i][j]>a[i][m]){
			k=a[i][j];
			a[i][j]=a[i][m];
			a[i][m]=k;
		}
		 } 
		
	}
	
	for(i=0;i<n;i++){
			if(a[i][num[i]-1]==a[i][0])  printf("ERROR\n");
		else{
	for(j=0;j<num[i];j++){
		if(a[i][j]!=a[i][0])
		{printf("%d\n",a[i][j]);
		break;
		}
	
			
		}
		}
		
	}
	
	
	return 0;
} 
