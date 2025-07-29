//to find dimensions of papers of different sizes given the size of A0 and A1
#include <stdio.h>
int main()
{
    int c;
    int a=1189;
    int b=841;
    int i;
    printf("The dimension of A0 is: %d mm x %d mm",a,b);
    for (i=1; i<9; i++)
    {
        c=a;
        a=b;
        b=c/2;
        printf("\nThe dimension of A%d is: %d mm x %d mm",i,a,b);
    }
    return 0;
}
