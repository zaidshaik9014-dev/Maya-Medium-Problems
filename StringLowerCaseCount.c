#include <stdio.h>

int main() {
    char str[10001];
    int i = 0, count = 0;

    scanf("%[^\n]s", str);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count++;
        }
        i++;
    }

    printf("%d", count);

    return 0;
}