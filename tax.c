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