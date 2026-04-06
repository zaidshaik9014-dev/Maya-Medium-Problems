#include <stdio.h>
#include <string.h>

int main() {
    char str1[10001], str2[10001];
    fgets(str1, sizeof(str1), stdin);

    strcpy(str2, str1);

    printf("%s", str2);

    return 0;
}