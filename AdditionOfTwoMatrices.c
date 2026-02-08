#include <stdio.h>

int main() {

    int n, m;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int a[n][m], b[n][m];

    printf("Enter Matrix 1:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Matrix 2:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Resultant Matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
