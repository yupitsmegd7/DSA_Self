#include <stdio.h>

void input(int a[][3], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d%d%d", &a[i][0], &a[i][1], &a[i][2]);
}

int add(int a[][3], int b[][3], int c[][3], int m, int n) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i][0] < b[j][0] ||                //does element of a come first
           (a[i][0] == b[j][0] && a[i][1] < b[j][1])) {
            c[k][0] = a[i][0];
            c[k][1] = a[i][1];
            c[k][2] = a[i][2];
            i++;
            k++;
        }

        else if (b[j][0] < a[i][0] ||           // does element of b come first
                (b[j][0] == a[i][0] && b[j][1] < a[i][1])) {
            c[k][0] = b[j][0];
            c[k][1] = b[j][1];
            c[k][2] = b[j][2];
            j++;
            k++;
        }

        else {
            if (a[i][2] + b[j][2] != 0) {       //actual addition
                c[k][0] = a[i][0];
                c[k][1] = a[i][1];
                c[k][2] = a[i][2] + b[j][2];
                k++;
            }
            i++;
            j++;
        }
    }

    while (i < m) {
        c[k][0] = a[i][0];
        c[k][1] = a[i][1];
        c[k][2] = a[i][2];
        i++;
        k++;
    }

    while (j < n) {
        c[k][0] = b[j][0];
        c[k][1] = b[j][1];
        c[k][2] = b[j][2];
        j++;
        k++;
    }

    return k;
}

void display(int a[][3], int n) {
    printf("Row Col Value\n");
    for (int i = 0; i < n; i++)
        printf("%d   %d   %d\n", a[i][0], a[i][1], a[i][2]);
}

int main() {
    int a[20][3], b[20][3], c[40][3];
    int m, n, k;

    printf("Enter number of terms in A: ");
    scanf("%d", &m);
    printf("Enter row col value:\n");
    input(a, m);

    printf("Enter number of terms in B: ");
    scanf("%d", &n);
    printf("Enter row col value:\n");
    input(b, n);

    k = add(a, b, c, m, n);

    printf("\nResultant sparse matrix:\n");
    display(c, k);

    return 0;
}
