#include <stdio.h>
int main()
{
    int n, prev1 = 1, prev2 = 0, i, ser;
    printf("Enter a number to find n term of fibbonaci series - ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Invalid number of terms");
    }
    for (i = 1; i <= n; i++)
    {
        if (i > 2)
        {
            ser = prev1 + prev2;
            prev2 = prev1;
            prev1 = ser;
            printf("%d ", ser);
        }

        // for first two terms
        if (i == 1)
        {
            printf("%d ", prev2);
        }
        if (i == 2)
        {
            printf("%d ", prev1);
        }
    }
}