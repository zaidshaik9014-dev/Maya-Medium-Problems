#include <stdio.h>
#include <string.h>
int main() {
    char s[10000];
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);

    if(s[len-1] == '\n') {
        len--;
    }

    for(int i = len-1; i >= 0; i--) {
        printf("%c",s[i]);
    }
    return 0;
}