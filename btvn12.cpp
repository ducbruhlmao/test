#include <stdio.h>
#include <stdlib.h>

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
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%.2f\t", a[i][j]);
        printf("\n");
    }
}

int dem_so_duong(float **a, int m, int n)
{
    int dem = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] > 0)
                dem++;
    return dem;
}

void sap_xep_hang_k(float ***a, int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((*a)[k][i] > (*a)[k][j])
            {
                float temp = (*a)[k][i];
                (*a)[k][i] = (*a)[k][j];
                (*a)[k][j] = temp;
            }
        }
    }
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
    printf("\nMa tran vua nhap:\n");
    xuat_ma_tran(a, m, n);

    int so_duong = dem_so_duong(a, m, n);
    printf("So luong so duong trong ma tran: %d\n", so_duong);

    int k;
    printf("Nhap chi so hang k (tu 0 den %d): ", m - 1);
    scanf("%d", &k);
    if (k < 0 || k >= m)
    {
        printf("Hang k khong hop le!\n");
    }
    else
    {
        sap_xep_hang_k(&a, n, k);
        printf("Ma tran sau khi sap xep hang %d tang dan:\n", k);
        xuat_ma_tran(a, m, n);
    }

    for (int i = 0; i < m; i++)
        free(a[i]);
    free(a);

    return 0;
}