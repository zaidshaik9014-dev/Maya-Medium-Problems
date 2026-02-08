#include <stdio.h>
int main() {

    char s[10000];
    int count = 0;
    fgets(s, sizeof(s), stdin);
    for(int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}