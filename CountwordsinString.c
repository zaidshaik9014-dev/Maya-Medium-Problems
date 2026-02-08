#include <stdio.h>
#include <string.h>

int main() {
    char s[10000];
    int count = 0;

    fgets(s, sizeof(s), stdin);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0') {
            count++;
        }
    }
    
    if(strlen(s) > 1)
        count++;

    printf("%d", count);

    return 0;
}

