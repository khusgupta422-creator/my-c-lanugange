#include <stdio.h>
int main() {
    int Ram,Shyam,Ajay;
    printf("Enter Ram:");
    scanf("%d",&Ram);
    printf("Enter Shyam:");
    scanf("%d",&Shyam);
    printf("Enter Ajay");
    scanf("%d",&Ajay);
    if(Ram>Shyam){
        if(Ram>Ajay)
        printf("%d is younest",Ram);
    else
    printf("%d is younest",Ajay);
    }
    else{ //Shyam>Ram
        if(Shyam>Ajay)
        printf("%d is younest",Shyam);
    else //Ajay>Shyam
    printf("%d is youngest",Ajay);

    }
    return 0;
}