#include <stdio.h>
#include <string.h>

int main() {
    char str[10001];

    scanf("%s", str);

    int count = strlen(str);

    printf("%d", count);

    return 0;
}