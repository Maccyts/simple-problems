#include <stdio.h>
int main()
{
    int i,j,a[100],n,f=1;
    scanf("%d",&n);
    for(i=1;i<=n;scanf("%d",&a[i++]));
        for(i=1;i<n-2;i++)
        {
            if((a[i]*a[i+1]!=a[i+2]))
            {
                f=0;
                break;
            }
        }
        if(f) printf("true");
        else printf("false");
}
