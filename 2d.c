#include <stdio.h>
int n,a[100][100],i,j;
int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            if(i==j||j==n-i+1)
                printf("%d",a[i][j]);
            else
				printf(" ");
		printf("\n");			
    }
}
