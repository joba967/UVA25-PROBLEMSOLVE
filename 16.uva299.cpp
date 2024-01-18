


#include <stdio.h>

int main()
{
    int t,i,j,n;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);

        int carriages[50];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &carriages[i]);
        }

        int swap =0;
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (carriages[j] > carriages[j + 1])
                {
                    int temp = carriages[j];
                    carriages[j] = carriages[j + 1];
                    carriages[j + 1] = temp;
                    swap++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", swap);
    }

    return 0;
}
