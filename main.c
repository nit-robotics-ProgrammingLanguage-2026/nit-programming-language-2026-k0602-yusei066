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
    {int num = 0;
        for (int i = 1; i <= n; i += 2)
        {
            num += i;
        }
        printf("%d\n", num);
    }
    return 0;
}
