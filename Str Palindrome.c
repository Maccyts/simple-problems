#include <stdio.h>
#include <string.h>
int main()
{
    int f=1,i,n;
    char a[50];
    scanf("%s",a);
    for(i=0;a[i];i++);
    n=i;
    for(i=0;i<n/2;i++)
        if(a[i]!=a[n-i-1])
        {
            f=0;
            break;
        }
    if(f) 
    printf("Palindrome");
    else
        printf("Not Palindrome");
}

