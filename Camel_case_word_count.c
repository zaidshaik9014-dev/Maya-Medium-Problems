#include <stdio.h>
int main() {
    char s[10000];
    fgets(s, sizeof(s), stdin);
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}