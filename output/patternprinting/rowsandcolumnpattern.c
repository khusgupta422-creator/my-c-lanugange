#include <stdio.h>
int main() {
    int n;
    printf("Enter a no. of rows:");
    scanf("%d",&n);
    int m;
    printf("Enter a no. of column:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}