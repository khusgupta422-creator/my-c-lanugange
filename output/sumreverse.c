#include <stdio.h>
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum = 0;
    int lastDigit = 0;
    if(n%2==0){
        lastDigit = n%10;
        sum = sum + lastDigit;
        n = n/10;
    }
    int r = 0;
    while(n>0){
        r = r + (n%10);
        r = r*10;
        n = n/10;
    }
    r = r/10;
    printf("The sum of reversed are %d",r);
    return 0;
}