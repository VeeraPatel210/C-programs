//to find the gross salary of a person whose basic salary is given
#include <stdio.h>
int main()
{
    float salary,daily_allow,house_rent, gross_pay;
    printf("Enter your basic salary:");
    scanf("%f",&salary);
    daily_allow=0.4*salary;
    house_rent=0.2*salary;
    gross_pay=daily_allow + house_rent + salary;
    printf("The gross salary of a person is %f",gross_pay);
    return 0;
}

