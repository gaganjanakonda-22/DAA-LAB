#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, amount;

    printf("Enter number of coins: ");
    scanf("%d", &n);

    int *coins = (int *)malloc(n * sizeof(int));

    printf("Enter coin denominations: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &coins[i]);

    printf("Enter amount: ");
    scanf("%d", &amount);

    int *dp = (int *)malloc((amount + 1) * sizeof(int));

    for (int i = 0; i <= amount; i++)
        dp[i] = amount + 1;

    dp[0] = 0;

    for (int i = 1; i <= amount; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (coins[j] <= i)
            {
                int value = dp[i - coins[j]] + 1;

                if (value < dp[i])
                    dp[i] = value;
            }
        }
    }

    if (dp[amount] > amount)
        printf("Change cannot be made.\n");
    else
        printf("Minimum number of coins required: %d\n", dp[amount]);

    free(coins);
    free(dp);

    return 0;
}