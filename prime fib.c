#include <stdio.h>
int prime(int n)
{
    int i,f=1;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
    }
    if(f) printf("%d ",n);
}
int main()
{
    int n,a=-1,b=1,c,t;
    scanf("%d",&n);
    t=n;
    while(n--)
    {
        c=a+b;
        a=b;
        b=c;
        if(c<t)
           prime(c);
    }
    
}

