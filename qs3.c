#include <stdio.h>
int main()
{
    int data[4][5];
    int productSum[5];
    int finalAmount=0;
    printf("Enter the salesman and product data:\n");
    // input
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &data[i][j]);
        }
    }
    // sum by row
    int total[4];
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += data[i][j];
            
        }total[i] = sum;
        //printf("Salesman [%d] sum is %d\n", i + 1, sum);
    }
    // sum by column
    for (int j = 0; j < 5; j++)
    {
        int sum = 0;
        for (int i = 0; i < 4; i++)
        {
            sum += data[i][j];
        }
        productSum[j] = sum;
        //printf("Product %d total sales = %d\n", j + 1, sum);
    }
    // expensive product
    int highest = productSum[0];
    int product = 0;
    for (int j = 0; j < 5; j++)
    {
        if (productSum[j] > highest)
        {
            highest = productSum[j];
            product = j;
        }
    }
    //printf("Product %d generated the highest revenue.\n", product + 1);

    //bonus
    int finalTotal[4];
    for(int i=0;i<4;i++){
        if(total[i]>10000){
            finalAmount=total[i]+total[i]*10/100;
            finalTotal[i]=finalAmount;
           // printf("Final amount is %d for %d with bonus applied\n", finalAmount,i+1);
        }else{
            finalTotal[i]=total[i];
           // printf("Final amount is %d for %d without bonus applied\n", total[i],i+1);
        }
    }
    //summary
    printf("\n\n-------TOTAL SUMMARY-------\n\n");
    for(int i=0;i<4;i++){
        printf("total sales of salesman %d are = %d\n",i+1, total[i]);
    }
    for(int i=0;i<5;i++){
        printf("total sales of product %d are = %d\n",i+1, productSum[i]);
    }
    printf("Product %d has the highest total revenue: Rs. %d\n", product + 1, highest);
    for(int i=0;i<4;i++){
        printf("Final amounts of %d is %d\n",i+1,finalTotal[i]);
    }
    return 0;
}