#include <stdio.h>

int main()
{
    int n, k;
    int max_and = 0, max_or = 0, max_xor = 0;

    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int and_result = i & j;
            int or_result = i | j;
            int xor_result = i ^ j;

            if (and_result < k && and_result > max_and)
                max_and = and_result;

            if (or_result < k && or_result > max_or)
                max_or = or_result;

            if (xor_result < k && xor_result > max_xor)
                max_xor = xor_result;
        }
    }

    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);

    return 0;
}
