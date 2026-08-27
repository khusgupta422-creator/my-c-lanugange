#include<stdio.h>
int main() {
    int Ram;
    printf("Enter Ram:");
    scanf("%d",&Ram);
    int Shyam;
    printf("Enter Shyam:");
    scanf("%d",&Shyam);
    int Ajay;
    printf("Enter Ajay:");
    scanf("%d",&Ajay);
    if(Ram>Shyam && Ram>Ajay){
        printf("Ram is younest than 3",Ram);
    }
    if(Shyam>Ram && Shyam>Ajay){
        printf("Shyam is younest than 3",Shyam);
    }
    if(Ajay>Ram && Ajay>Shyam){
        printf("Ajay is younest than 3",Ajay);
    }
    return 0;
}