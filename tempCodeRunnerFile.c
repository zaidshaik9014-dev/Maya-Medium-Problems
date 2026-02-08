#include <stdio.h>
#include <string.h>
int main() {
    char s[10000];
    int sum = 0;
    fgets(s, sizeof(s), stdin);
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= '0' && s[i] <= '9'){
            sum += s[i] - '0';
        }
    }
    printf("%d",sum);
    return 0;
}