#include<stdio.h>
int main()
 {
    int cp;
    int sp;
   printf("The cost price:");
    scanf("%d",&cp);
    printf("The selling price:");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    }
    else{
        printf("loss");
    }
    return 0;
}