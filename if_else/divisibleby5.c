#include <stdio.h>
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
        if(n%5==0){
        printf("divisble by 5:" );
    }
    else{
        printf("divisble not by 5:");
    }
    return 0;
}