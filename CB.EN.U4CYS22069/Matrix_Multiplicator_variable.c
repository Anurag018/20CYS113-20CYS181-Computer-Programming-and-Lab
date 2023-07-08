#include <stdio.h>

int main()
{
    int m, n, k,q, i, j, p, sum;
    
    printf("Enter the number of rows (M) for the first matrix: ");
    scanf("%d", &m);
    
    printf("Enter the number of columns (N) for the first matrix: ");
    scanf("%d", &n);
    
    printf("Enter the number of rows (M) for the second matrix: ");
    scanf("%d", &q);
    
    printf("Enter the number of columns (K) for the second matrix: ");
    scanf("%d", &k);

    if(n==q)
    {
        int a[m][n], b[q][k], c[m][k];

        printf("Enter the elements of the first matrix:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
    
        printf("Enter the elements of the second matrix:\n");
        for (i = 0; i < q; i++)
        {
            for (j = 0; j < k; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
    
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < k; j++)
            {
                sum = 0;
                for (p = 0; p < n; p++)
                {
                    sum = sum + a[i][p] * b[p][j];
                }
                c[i][j] = sum;
            }
        }
    
        printf("The resulting matrix after multiplication is:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < k; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Please Enter The Column Size For The First Matrix And The Row Size For The Second Matrix 'SAME'");
    }
    
    return 0;
}
