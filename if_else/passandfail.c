#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if (marks >= 40){
        printf("pass\n");
        if(marks >= 75)
        {
            printf("Distinction");
        }
    }
    else{
        printf("Fail");
    }
    return 0;
}