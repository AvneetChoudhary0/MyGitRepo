#include <stdio.h>
int main()
{
    int a[5][5], b[5][5], x[5][5];
    int r, c, i, j, t, k;
    printf("Enter No. Of Rows: ");
    scanf("%d", &r);
    printf("Enter No. of Column: ");
    scanf("%d", &c);
    printf("\n Enter A Matrix: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\t %d", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter B Matrix: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\t %d", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            t = 0;
            for (k = 0; k < c; k++)
            {
                t += (a[i][k] * b[k][j]);
            }
            x[i][j] = t;
        }
    }
    printf("\n Multiplication is: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\t %d", x[i][j]);
        }
        printf("\n");
    }
    return 0;
}