 #include <stdio.h>
    void main()
    {
 
        int i, j, a, n;
        scanf("%d", &n);
        int numbers[n];
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] =
 
                }
 
            }
 
        }
 
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
 
    }
