#include <stdio.h>
#include <stdlib.h>

// 1. Nhập ma trận thực m x n
void nhap_ma_tran(float **a, int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
}

// 2. Hiển thị ma trận
void xuat_ma_tran(float **a, int m, int n)
{
    printf("Ma tran vua nhap:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%.2f\t", a[i][j]);
        printf("\n");
    }
}

// 3. Tính tổng các phần tử của ma trận
float tong_ma_tran(float **a, int m, int n)
{
    float tong = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            tong += a[i][j];
    return tong;
}

// 4. Tìm giá trị lớn nhất trên hàng 1
float lon_nhat_hang1(float **a, int n)
{
    float max = a[1][0];
    for (int j = 1; j < n; j++)
        if (a[1][j] > max)
            max = a[1][j];
    return max;
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
    if (m > 1)
        printf("Gia tri lon nhat tren hang 1: %.2f\n", lon_nhat_hang1(a, n));
    else
        printf("Khong co hang 1 de tim gia tri lon nhat!\n");

    for (int i = 0; i < m; i++)
        free(a[i]);
    free(a);
    return 0;
}