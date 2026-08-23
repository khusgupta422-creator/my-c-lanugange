/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float p,r,t,si  ;
    printf("principal:",p);
    scanf("%f",&p);
    printf("Rate:",r);
    scanf("%f",&r);
    printf("Time:",t);
    scanf("%f",&t);
    
   si = (p*r*t)/100;
    printf("The simple interest is:%f",si);
    
    
    return 0;
}
