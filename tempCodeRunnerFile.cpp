#include <stdio.h>
#include <stdlib.h>
void Nhap_Ma_Tran(int m, int n, int **a)
{
    for (int i = 0; i < m; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", (*(a + i) + j));
        }
    }
}
void In_Ma_Tran(int m, int n, int **a)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d", *(*(a + i) + j));
        }
        printf("\n");
    }
}
int Sum(int m, int n, int **a)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}
int Max_Row(int m, int n, int **a)
{
    int max_ngoai = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int max = a[0][0];
            if (a[0][j] > max)
                ;
            {
                max = a[0][j];
                max_ngoai = max;
            }
        }
    }
    return max_ngoai;
}
int main()
{
    int **a;
    int m, n;
    printf("Nhap so hang: ");
    scanf("%d", &m);
    printf("Nhap so cot: ");
    scanf("%d", &n);
    a = (int **)malloc(m * sizeof(int *));
    Nhap_Ma_Tran(m, n, a);
    printf("Ma tran vua nhap la:\n");
    In_Ma_Tran(m, n, a);
    printf("Tong cac phan tu trong ma tran: %d", Sum(m, n, a));
    printf("Gia tri lon nhat tren hang 0 cua ma tran: %d", Max_Row(m, n, a));
    return 0;
}