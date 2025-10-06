#include <stdio.h>
#include <stdlib.h>

void nhap_mang(float *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void xuat_mang(float *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%.2f ", a[i]);
    printf("\n");
}

float tbc_so_duong(float *a, int n)
{
    float tong = 0;
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
        {
            tong += a[i];
            dem++;
        }
    if (dem == 0)
        return 0;
    return tong / dem;
}

void sap_xep_tang(float *a, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

int main()
{
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    float *a = (float *)malloc(n * sizeof(float));
    if (!a)
    {
        printf("Khong cap phat duoc bo nho!\n");
        return 1;
    }

    nhap_mang(a, n);

    printf("Mang vua nhap: ");
    xuat_mang(a, n);

    float tbc = tbc_so_duong(a, n);
    if (tbc == 0)
        printf("Khong co so duong trong mang.\n");
    else
        printf("Trung binh cong cac so duong: %.2f\n", tbc);

    sap_xep_tang(a, n);
    printf("Mang sau khi sap xep tang dan: ");
    xuat_mang(a, n);

    free(a);
    return 0;
}