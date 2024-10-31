#include <stdio.h>
#include <stdlib.h>

int main()
{
    int customers,total_customers,credit_limit,quantity;
    float price,value;
    customers=0;

    printf("Enter the number of customers:\n");
    scanf("%d",&total_customers);

    while(customers<total_customers)
    {
        printf("Enter the credit limit:\n");
        scanf("%d",&credit_limit);

        printf("Enter the price of the item:\n");
        scanf("%f",&price);