#include <stdio.h>

int main()
{
    int s, n;
    scanf("%d %d", &s, &n);

    int dragons[n][2];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &dragons[i][0], &dragons[i][1]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (dragons[j][0] > dragons[j + 1][0])
            {
                int tempStrength = dragons[j][0];
                dragons[j][0] = dragons[j + 1][0];
                dragons[j + 1][0] = tempStrength;

                int tempBonus = dragons[j][1];
                dragons[j][1] = dragons[j + 1][1];
                dragons[j + 1][1] = tempBonus;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s <= dragons[i][0])
        {
            printf("NO\n");
            return 0;
        }
        s += dragons[i][1];
    }

    printf("YES\n");
    return 0;
}
