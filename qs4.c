
#include <stdio.h>
int main()
{
    int cube[3][3][3];
    int grid, row, col; 
    float avg[3];
    printf("Enter the input for each point:\n");
    // taking input of each point
    for (grid = 0; grid < 3; grid++)
    {
        for (row = 0; row < 3; row++)
        {
            for (col = 0; col < 3; col++)
            {
                scanf("%d", &cube[grid][row][col]);
            }
        }
    }
    // avg of each layer
    for (col = 0; col < 3; col++)
    {
        float sum = 0;
        for (grid = 0; grid < 3; grid++)
        {
            for (row = 0; row < 3; row++)
            {
                sum += cube[grid][row][col];
            }
        }
        avg[col] = sum / 9;
        printf("the average temperature of layer %d is : %f.\n", col, avg[col]);
    }
    // finding hottest
    float hottest = avg[0];
    int layer = 0;
    for (col = 1; col < 3; col++)
    {
        if (avg[col] > hottest)
        {
            hottest = avg[col];
            layer = col;
        }
    }
    printf("Hottest layer number: %d and its average temperature: %.2f\n", layer, hottest);
    // finding hottest from whole grid
    int highest = cube[0][0][0];
    int x = 0, y = 0, z = 0;
    for (grid = 0; grid < 3; grid++)
    {
        for (row = 0; row < 3; row++)
        {
            for (col = 0; col < 3; col++)
            {
                if (cube[grid][row][col] > highest)
                {
                    highest = cube[grid][row][col];
                    x = grid;
                    y = row;
                    z = col;
                }
            }
        }
    }

    printf("maximum temperature is %d which occurs at: (%d,%d, %d)\n", highest,x,y,z);
    return 0;
}
