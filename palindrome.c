#include <stdio.h>
void main()
{
    int a,c= 0, b,n;
    scanf("%d", &a);
    n=a;
    while( n!=0 )
    {
        b = n%10;
        c = c*10 + b;
        n /= 10;
    }
    if (a == c)
        printf("%d is a palindrome.", a);
    else
        printf("%d is not a palindrome.", a);
    
    return 0;
}
