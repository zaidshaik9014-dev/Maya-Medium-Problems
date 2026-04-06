#include <stdio.h>
#include <ctype.h>

int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int isPalindrome(char str[]) {
    int start = 0;
    int end = stringLength(str) - 1;

    while (start < end) {
        char a = tolower(str[start]);
        char b = tolower(str[end]);

        if (a != b) {
            return 0;
        }

        start++;
        end--;
    }

    return 1;
}

int main() {
    char string[10000];
    scanf("%[^\n]s", string);

    if (isPalindrome(string)) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}