#include <stdio.h>
#include <stdlib.h>

// 1. Nhập ma trận vuông n x n
void nhap_ma_tran(float **a, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
}

// 2. Hiển thị ma trận
void xuat_ma_tran(float **a, int n)
{
    printf("Ma tran vua nhap:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%.2f\t", a[i][j]);
        printf("\n");
    }
}

// 3. Hiển thị các phần tử trên đường chéo chính
void hien_thi_cheo_chinh(float **a, int n)
{
    printf("Cac phan tu tren duong cheo chinh: ");
    for (int i = 0; i < n; i++)
        printf("%.2f ", a[i][i]);
    printf("\n");
}

// 4. Sắp xếp giảm dần các giá trị trên cột cuối cùng
void sap_xep_cot_cuoi_giam(float **a, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i][n - 1] < a[j][n - 1])
            {
                // Đổi cả hàng i và hàng j
                for (int k = 0; k < n; k++)
                {
                    float temp = a[i][k];
                    a[i][k] = a[j][k];
                    a[j][k] = temp;
                }
            }
}

int main()
{
    int n;
    printf("Nhap kich thuoc ma tran vuong n: ");
    scanf("%d", &n);

    float **a = (float **)malloc(n * sizeof(float *));
    for (int i = 0; i < n; i++)
        a[i] = (float *)malloc(n * sizeof(float));

    nhap_ma_tran(a, n);
    xuat_ma_tran(a, n);

    hien_thi_cheo_chinh(a, n);

    sap_xep_cot_cuoi_giam(a, n);
    printf("Ma tran sau khi sap xep cot cuoi giam dan:\n");
    xuat_ma_tran(a, n);

    for (int i = 0; i < n; i++)
        free(a[i]);
    free(a);
    return 0;
}