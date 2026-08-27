#include <stdio.h>
int main() {
    int age = 20;
    if(age >= 18){
        printf("Adult\n");
        if(age >=21) {
            printf("Can vote");
        }
    }
    else{
        printf("child");
    }
    return 0;
}