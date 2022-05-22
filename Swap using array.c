#include <stdio.h>
int i,j,a[100],n;
int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;scanf("%d",&a[i++]));
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
            if(a[i]>a[j])
            a[i]=a[i]+a[j]-(a[j]=a[i]);
    }
         for(i=1;i<=n;i++)
            printf("%d ",a[i]);

}
