#include <stdio.h>
int main()
{
    float m1= 40; // maths
    float m2= 39; // english
    float m3= 30; // hindi
    float m4= 25; // sst
    
    float p = (m1 + m2 + m3 + m4 ) * 100/160;
    printf("Percentage of 4 subjects is: %f",p);
    return 0;
}