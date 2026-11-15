#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("NG\n");
    }
    else
    {long num = 0;
        for (long i = 1; i <= n; i += 2)
        {
            num += i;
        }
        printf("%ld\n", num);
    }
    return 0;
}
