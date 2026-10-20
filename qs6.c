
#include <stdio.h>

int main()
{
    int i, j, data[3][3], key[3][3], encrypted[3][3];

    printf("Enter the input for each point:\n");

    // Taking input for each data matrix cell
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &data[i][j]);
        }
    }

    // Taking input for each key matrix cell
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &key[i][j]);
        }
    }

    // Applying the encryption rule
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            encrypted[i][j] = (data[i][j] * key[i][j]) + (i + j);
            printf("%d ", encrypted[i][j]);
        }
        printf("\n");
    }

    // Finding the highest encrypted value
    int row = 0, col = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (encrypted[i][j] > encrypted[row][col])
            {
                row = i;
                col = j;
            }
        }
    }

    printf("Highest value = %d\n", encrypted[row][col]);
    printf("Position = [%d][%d]\n", row, col);

    return 0;
}
