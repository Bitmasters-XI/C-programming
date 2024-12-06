#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gross_pay, tax_payable, tax_rate, net_pay;
    int dependants;
    printf("Enter gross pay");
    scanf("%f",&gross_pay);
    printf("Enter dependants");
    scanf("%d",&dependants);
    if(gross_pay>20000,dependants>=3){
        tax_rate=0.25;
        printf("tax rate:%f\n",tax_rate);
    }else if(gross_pay>20000,dependants<3){
        tax_rate=0.35;
        printf("tax rate:%f\n",tax_rate);
    }else if(gross_pay>10000,dependants>=3){
        tax_rate=0.1;
        printf("tax rate:%f\n",tax_rate);
    }else if(gross_pay>10000,dependants<3){
        tax_rate=0.15;
        printf("tax rate:%f\n",tax_rate);
    
}



// START
//     DECLARE variables:
//         gross_pay (FLOAT), tax_payable (FLOAT), tax_rate (FLOAT), net_pay (FLOAT)
//         dependants (INTEGER)

//     PRINT "Enter gross pay"
//     INPUT gross_pay

//     PRINT "Enter dependants"
//     INPUT dependants

//     // Determine tax rate based on conditions
//     IF gross_pay > 20000 AND dependants >= 3 THEN
//         SET tax_rate to 0.25
//         PRINT "Tax rate:" tax_rate
//     ELSE IF gross_pay > 20000 AND dependants < 3 THEN
//         SET tax_rate to 0.35
//         PRINT "Tax rate:" tax_rate
//     ELSE IF gross_pay > 10000 AND dependants >= 3 THEN
//         SET tax_rate to 0.10
//         PRINT "Tax rate:" tax_rate
//     ELSE IF gross_pay > 10000 AND dependants < 3 THEN
//         SET tax_rate to 0.15
//         PRINT "Tax rate:" tax_rate
//     END IF
// END
