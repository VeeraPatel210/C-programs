//to convert distance from km to m, inch, cm and feet
#include <stdio.h>
int main()
{
    float d_km,d_inch,d_cm,d_feet,d_m;
    printf("Enter distance in km");
    scanf("%f",&d_km);
    d_m=d_km*1000;
    d_inch=d_km*39370;
    d_cm=d_km*100000;
    d_feet=d_km*3280;
    printf("The distance in meter is %f m",d_m);
    printf("\nThe distance in centimeter is %f cm",d_cm);
    printf("\nThe distance in meter is %f inch",d_inch);
    printf("\nThe distance in meter is %f feet",d_feet);
    return 0;
}
