//to find area and perimeter of circle and rectangle
#include <stdio.h>
#define PI 3.14
void main()
{
    float radius,length,breadth,a_circle,a_rec,p_rec,p_circle;
    printf("Enter the radius of circle:");
    scanf("%f",&radius);
    printf("Enter the length of rectangle:");
    scanf("%f",&length);
    printf("Enter the breadth of rectangle:");
    scanf("%f",&breadth);
    a_circle=(PI*radius*radius);
    p_circle=(2*PI*radius);
    a_rec=(length*breadth);
    p_rec=2*(length+breadth);
    printf("The area of circle is: %f",a_circle);
    printf("\nThe circumference of circle is: %f",p_circle);
    printf("\nThe area of rectangle is: %f",a_rec);
    printf("\nThe perimeter of rectangle is: %f",p_rec);
}
