#include <stdio.h>
int main()
{
    int seats[10][4], row, seat, seatNum;
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            seats[i][j] = 0;
        }
    }

    printf("Enter how many seats you want to reserve:\n");
    scanf("%d", &seatNum);
    for (int i = 0; i < seatNum; i++)
    {
        printf("Enter the row number:\n");
        scanf("%d", &row);
        printf("Enter the seat number:\n");
        scanf("%d", &seat);

        if (row < 1 || row > 10 || seat < 1 || seat > 4)
        {
            printf("Invalid seat range");
        }
        else
        {
            if (seats[row-1][seat-1] == 0)
            {
                seats[row-1][seat-1] = 1;
                printf("Seat booked");
            }
            else
            {
                printf("Seat already booked, choose again.");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < 11; i++)
    {
         printf("%d ",i );
        
        for (int j = 0; j < 4; j++)
        { 
            if (i == 0)
            {
                printf(" %d ",j+1);

            }
            else {
                printf(" %d ", seats[i-1][j]);
            }
        }
        printf("\n");
        
    }
    int totalcount=0;
    for(int i=0;i<10;i++){
        int count=0;
        for(int j=0;j<4;j++){
            if(seats[i][j]==1){
               count++;
            }
        }if (count==4){
            totalcount++;}
    } printf("total number of fully booked rows= %d",totalcount);
    return 0;
}