//WAP to perform transpose of a given sparse matrix in 3-tuple format.

#include <stdio.h>

int main()
{
    int a[10][10], s[50][3], t[50][3];
    int r, c, i, j, k = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Convert normal matrix to 3-tuple format
    s[0][0] = r;
    s[0][1] = c;
    s[0][2] = 0;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] != 0)
            {
                s[k][0] = i;
                s[k][1] = j;
                s[k][2] = a[i][j];
                k++;
                s[0][2]++;
            }
        }
    }

    // Display sparse matrix
    printf("\nSparse matrix in 3-tuple format:\n");
    printf("R C Element\n");

    for (i = 0; i <= s[0][2]; i++)
    {
        printf("%d %d %d\n", s[i][0], s[i][1], s[i][2]);
    }

    // Transpose
    t[0][0] = s[0][1];
    t[0][1] = s[0][0];
    t[0][2] = s[0][2];

    k = 1;

    for (j = 0; j < s[0][1]; j++)
    {
        for (i = 1; i <= s[0][2]; i++)
        {
            if (s[i][1] == j)
            {
                t[k][0] = s[i][1];
                t[k][1] = s[i][0];
                t[k][2] = s[i][2];
                k++;
            }
        }
    }

    // Display transpose
    printf("\nTranspose of sparse matrix:\n");
    printf("R C Element\n");

    for (i = 0; i <= t[0][2]; i++)
    {
        printf("%d %d %d\n", t[i][0], t[i][1], t[i][2]);
    }

    return 0;
}
