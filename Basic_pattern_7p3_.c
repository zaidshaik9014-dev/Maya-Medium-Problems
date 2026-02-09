#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        for(int s = 0; s < i; s++) {
            printf(" ");
        }
        for(int j = n-i; j >= 1; j--) {
            printf("%d ",j);
        }
        printf("\n\n");
    }
    return 0;
}