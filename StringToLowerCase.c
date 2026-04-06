#include <stdio.h>

void ToLowerCase(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

int main() {
    char str[10001];

    scanf("%[^\n]s", str);

    ToLowerCase(str);

    printf("%s", str);

    return 0;
}

// #include <stdio.h>
// #include <ctype.h>

// void ToLowerCase(char str[]) {
//     int i = 0;

//     while (str[i] != '\0') {
//         str[i] = tolower(str[i]);
//         i++;
//     }
// }

// int main() {
//     char str[10001];
//     scanf("%[^\n]s", str);
//     ToLowerCase(str);
//     printf("%s", str);

//     return 0;
// }