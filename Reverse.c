#include <stdio.h>
int rev(int n)
{
    int s=0;
    for( ;n;s=s*10+n%10,n=n/10);
    return(s);
}
void main()
{
    printf("%d",rev(123));
}

