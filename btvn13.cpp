#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void nhap_ma_tran(float **a, int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
}

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

float trung_binh_cong(float **a, int m, int n)
{
    float tong = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            tong += a[i][j];
    return tong / (m * n);
}

void tim_x(float **a, int m, int n, float x)
{
    bool co = false;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] == x)
            {
                printf("x = %.2f o vi tri hang %d, cot %d\n", x, i, j);
                co = true;
            }
    if (!co)
        printf("Khong tim thay x = %.2f trong ma tran.\n", x);
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

    float tbc = trung_binh_cong(a, m, n);
    printf("Trung binh cong cac phan tu cua ma tran: %.2f\n", tbc);

    float x;
    printf("Nhap x can tim: ");
    scanf("%f", &x);
    tim_x(a, m, n, x);

    for (int i = 0; i < m; i++)
        free(a[i]);
    free(a);

    return 0;
}