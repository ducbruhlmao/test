#include <stdio.h>
#include <stdlib.h>

void Nhap_Ma_Tran(float **a, int m, int n)
{
    a = (float **)malloc(m * sizeof(float *));
    for (int i = 0; i < m; i++)

    {
        a[i] = (float *)malloc(n * sizeof(float));
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%f", &a[j][j]);
        }
    }
}

int main()
{
    int m, n;
    printf("Nhap so hang: ");
    scanf("%d", &m);
    printf("Nhap so cot: ");
    scanf("%d", &n);
    float **a;
    Nhap_Ma_Tran(a, m, n);
    return 0;
}