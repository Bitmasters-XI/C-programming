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
        do{
        printf("Enter the quantity of items:\n");
        scanf("%d",&quantity);

        value=quantity*price;
   if(credit_limit<value)
        {
            printf("Sorry, you cannot purchase goods worthy such a value on credit.\n");
            printf("Please enter new quantity of goods.\n");

        }else
        {
            printf("Thank you for purchasing from us.\n");
            printf("Value of goods:%.2f\n",value);
            break;
        }
        }while(1);
        customers++;
    }

 return 0;
}




// START
//     DECLARE variables:
//         customers, total_customers, credit_limit, quantity
//         price (FLOAT), value (FLOAT)
//     INITIALIZE customers to 0

//     PRINT "Enter the number of customers:"
//     INPUT total_customers

//     WHILE customers < total_customers DO
//         PRINT "Enter the credit limit:"
//         INPUT credit_limit

//         PRINT "Enter the price of the item:"
//         INPUT price

//         DO
//             PRINT "Enter the quantity of items:"
//             INPUT quantity

//             SET value to quantity * price

//             IF credit_limit < value THEN
//                 PRINT "Sorry, you cannot purchase goods worthy such a value on credit."
//                 PRINT "Please enter new quantity of goods."
//             ELSE
//                 PRINT "Thank you for purchasing from us."
//                 PRINT "Value of goods:" value
//                 BREAK
//             END IF
//         WHILE TRUE
//         INCREMENT customers by 1
//     END WHILE

//     END
