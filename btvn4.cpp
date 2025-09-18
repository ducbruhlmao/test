#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Nhap_Ma_Tran(int **a, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void In_Ma_Tran(int **a, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d\t", a[i][j]);
        }
        printf("\n");
    }
}

int Max(int **a, int m, int n)
{
    int max = a[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][0] > max)
            {
                max = a[i][0];
            }
        }
    }
    return max;
}

float Everage(int **a, int m, int n)
{
    int tong = 0;
    int dem = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((a[i][j]) % 2 != 0)
            {
                tong += a[i][j];
                dem++;
            }
        }
    }
    return tong / dem;
}

void Giai_Phong(int **a, int m)
{
    for (int i = 0; i < m; i++)
    {
        free(a[i]);
    }
    free(a);
}

int main()
{
    int m, n;
    printf("Nhap so hang: ");
    scanf("%d", &m);
    printf("Nhap so cot: ");
    scanf("%d", &n);
    int **a;
    a = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
    }
    Nhap_Ma_Tran(a, m, n);
    printf("Ma tran vua nhap la: \n");
    In_Ma_Tran(a, m, n);
    printf("Trung bình cộng các phần tử lẻ của ma trận: %.3f", Everage(a, m, n));
    printf("Giá trị lớn nhất trên cột 0 của ma trận: %d", Max(a, m, n));
    Giai_Phong(a, m);
    return 0;
}