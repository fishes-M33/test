#include <stdio.h>

int main() {

    int n, i;
    int m[100][4];

    scanf("%d", &n);  // 有n组数据

    for (i = 0; i < n; i++) {

        int a, b, c, d;
        
        scanf("%d %d %d %d",&a,&b,&c,&d);
        
        int x;
        
        if(a>b)
        {x=a;a=b;b=x;
		}
		if(a>c)
		{x=a;a=c;c=x;
		}
		if(a>d)
		{x=a;a=d;d=x;
		}
		if(b>c)
		{x=b;b=c;c=x;
		}
		if(b>d)
		{x=b;b=d;d=x;
		}
		if(c>d)
		{x=c;c=d;d=x;
		}
        
         m[i][0]=a;
		 m[i][1]=b;
		 m[i][2]=c;
		 m[i][3]=d; 

        
        //4 6 8 5
        
        
        

 

        // 读入4个整数，对这4个整数排序，并输出结果

        // 请将排序代码写在这里，不能使用循环语句

    }
 for (i = 0; i < n; i++){
 	printf("%d %d %d %d\n",m[i][0],m[i][1],m[i][2],m[i][3]);
 }
   

    return 0;

}
