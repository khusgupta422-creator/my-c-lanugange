#include <stdio.h>
int main() {
    int l;
    printf("The length is:");
    scanf("%d",l);
    int b;
    printf("The breadth is:");
    scanf("%d",b);
    int a = l*b;
    int p = 2 *(l+b);
    if(a>p){
        printf("Area is greater than perimeter");
    }
    else{
        printf("Area is not greater than perimeter");
    }
    return 0;
}