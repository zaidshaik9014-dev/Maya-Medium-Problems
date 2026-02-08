#include <stdio.h>
#include <String.h>
int main() {
    char s[10000];
    char v;
    int found = 0;
    fgets(s, sizeof(s), stdin);
    scanf(" %c",&v);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == v) {
            printf("True\n%d",i);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("False");
    }
    return 0;
}
