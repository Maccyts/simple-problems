#include <stdio.h>
int n,a[100][100],i,j,s=0,r=0;
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
            s=s+a[i][i];
            r=r+a[i][n-i+1];
        }
             printf("%d%d",s,r);
}
