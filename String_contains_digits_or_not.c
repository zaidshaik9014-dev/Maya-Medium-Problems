#include <stdio.h>

int main() {
    char s[10000];
    fgets(s, sizeof(s), stdin);

    int found = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= '0' && s[i] <= '9'){
            found = 1;
            break;
        }
    }

    if(found)
        printf("Yes");
    else
        printf("No");

    return 0;
}
