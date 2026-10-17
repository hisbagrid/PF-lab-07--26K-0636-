#include <stdio.h>
int main(){
    int grid[3][3];int invalid = 0;
    printf("Enter 9 numbers (0 for empty cells):\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &grid[i][j]);
            if (grid[i][j] < 0 || grid[i][j] > 9)
            {
                invalid = 1;
            }
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] != 0)
            {
                for (int x = 0; x < 3; x++)
                {
                    for (int y = 0; y < 3; y++)
                    {
                        if (i != x || j != y)
                        {
                            if (grid[i][j] == grid[x][y]
                                && grid[x][y] != 0)
                            {
                                invalid = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    if (invalid == 1)
    {
        printf("Invalid Grid\n");
    }
    else
    {
        printf("Valid Grid\n");
    }
    return 0;
}