#include <stdio.h>

void input(int a[], int n) {
    for (int i = 0; i <= n; i++)
        scanf("%d", &a[i]);
}

void add(int a[], int b[], int c[], int n) {
    for (int i = 0; i <= n; i++)
        c[i] = a[i] + b[i];
}

void display(int a[], int n) {
    for (int i = n; i >= 0; i--) {
        if (a[i] != 0) {
            printf("%dx^%d", a[i], i);
            if (i != 0)
                printf(" + ");
        }
    }
    printf("\n");
}

int main() {
    int a[20] = {0}, b[20] = {0}, c[20] = {0};
    int n1, n2, n;

    printf("Enter degree of first polynomial: ");
    scanf("%d", &n1);

    printf("Enter coefficients from x^0 to x^%d:\n", n1);
    input(a, n1);

    printf("Enter degree of second polynomial: ");
    scanf("%d", &n2);

    printf("Enter coefficients from x^0 to x^%d:\n", n2);
    input(b, n2);

    n = (n1 > n2) ? n1 : n2;

    add(a, b, c, n);

    printf("First polynomial: ");
    display(a, n1);

    printf("Second polynomial: ");
    display(b, n2);

    printf("Sum: ");
    display(c, n);

    return 0;
}
