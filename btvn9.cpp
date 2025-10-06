#include <stdio.h>
#include <stdlib.h>

void nhap_mang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuat_mang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

float trung_binh_doan(int *a, int n, int x, int y)
{
    int tong = 0, dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x && a[i] <= y)
        {
            tong += a[i];
            dem++;
        }
    }
    if (dem == 0)
        return 0;
    return (float)tong / dem;
}

int gia_tri_lon_nhat(int *a, int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int main()
{
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int *a = (int *)malloc(n * sizeof(int));
    if (!a)
    {
        printf("Khong cap phat duoc bo nho!\n");
        return 1;
    }

    nhap_mang(a, n);

    printf("Mang vua nhap: ");
    xuat_mang(a, n);

    int x, y;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap y: ");
    scanf("%d", &y);

    float tbc = trung_binh_doan(a, n, x, y);
    if (tbc == 0)
        printf("Khong co phan tu nao trong doan [%d, %d]\n", x, y);
    else
        printf("Trung binh cong cac phan tu trong doan [%d, %d]: %.2f\n", x, y, tbc);

    printf("Gia tri lon nhat cua mang: %d\n", gia_tri_lon_nhat(a, n));

    free(a);
}