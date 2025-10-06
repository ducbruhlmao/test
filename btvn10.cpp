#include <stdio.h>
#include <stdlib.h>

void nhap_ma_tran(float **a, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}

void xuat_ma_tran(float **a, int m, int n)
{
    printf("Ma tran vua nhap:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }
}

float tong_ma_tran(float **a, int m, int n)
{
    float tong = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            tong += a[i][j];
    return tong;
}

float nho_nhat_cot1(float **a, int m)
{
    float min = a[0][1];
    for (int i = 0; i < m; i++)
    {
        if (a[i][1] < min)
            min = a[i][1];
    }
    return min;
}

int main()
{
    int m, n;
    printf("Nhap so hang m: ");
    scanf("%d", &m);
    printf("Nhap so cot n: ");
    scanf("%d", &n);

    float **a = (float **)malloc(m * sizeof(float *));
    for (int i = 0; i < m; i++)
        a[i] = (float *)malloc(n * sizeof(float));

    nhap_ma_tran(a, m, n);
    xuat_ma_tran(a, m, n);

    printf("Tong cac phan tu cua ma tran: %.2f\n", tong_ma_tran(a, m, n));
    printf("Gia tri nho nhat tren cot 1: %.2f\n", nho_nhat_cot1(a, m));

    for (int i = 0; i < m; i++)
        free(a[i]);
    free(a);
}