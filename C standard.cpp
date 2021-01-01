#include <stdio.h>
int main()
{
    char a[100][100];
    int n,i,j,l;
    int count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        for(j=0;j<50;j++)
        {
            if(a[i][j]=='S'&&a[i][j+1]=='C'&&a[i][j+2]=='U')
            break;
        }
        for(l=0;l<j;l++)
        {
            if(a[i][j-l-1]=='A'&&a[i][j+3+l]=='A')   
            count++;
        }
        if(count==j)     
        printf("Yes");
        else
        printf("No");
        count=0; 
    }
    return 0;
}
