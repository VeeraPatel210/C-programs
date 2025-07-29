//to find aggregate marks and percent of student
#include <stdio.h>
int main()
{
    float math,eng,chem,phy,comp,agg,percent;
    printf("Enter marks of maths:");
    scanf("%f",&math);
    printf("Enter marks of english:");
    scanf("%f",&eng);
    printf("Enter marks of physics:");
    scanf("%f",&phy);
    printf("Enter marks of chemistry:");
    scanf("%f",&chem);
    printf("Enter marks of computer:");
    scanf("%f",&comp);
    agg=(math+eng+phy+chem+comp);
    printf("The aggregate marks of a student is: %f",agg);
    percent=agg/5;
    printf("\nThe percentage obtained by student is: %f",percent);
    return 0;
}
