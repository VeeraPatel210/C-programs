//to convert Fahrenheit temperature into degree centigrade
#include <stdio.h>
int main()
{
    float temp_F, temp_C;
    printf("Enter the temperature of a city in Fahrenheit:");
    scanf("%f",&temp_F);
    temp_C=((temp_F-32)*5)/9;
    printf("\nThe temperature of  city in degree centigrade is: %f",temp_C);
    return 0;
}
