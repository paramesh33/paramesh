#include <stdio.h>
int main()
{
    int n, i,factorial;
    scanf("%d",&n);
        for(i=1; i<=n; ++i)
        {
            factorial *= i;        
        }
        printf(" %d ", factorial);
    }

    return 0;
}
