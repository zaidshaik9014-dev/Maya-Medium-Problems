#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char str[105];

    // consume leftover newline
    getchar();

    for(int i = 0; i < n; i++) {
        fgets(str, sizeof(str), stdin);

        int hasDigit = 0;

        for(int j = 0; str[j] != '\0'; j++) {
            if(str[j] >= '0' && str[j] <= '9') {
                hasDigit = 1;
                break;
            }
        }

        if(hasDigit)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}