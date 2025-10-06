#include <stdio.h>
#include <stdlib.h>

// 1. Nhập mảng số nguyên một chiều
void nhap_mang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

// 2. Hiển thị mảng trên một hàng
void xuat_mang(int *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

// 3. Tính trung bình cộng các số chẵn dương
float tbc_chan_duong(int *a, int n)
{
    int tong = 0, dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0 && a[i] % 2 == 0)
        {
            tong += a[i];
            dem++;
        }
    if (dem == 0)
        return 0;
    return (float)tong / dem;
}

// 4. Xoá các phần tử có giá trị bằng x
void xoa_x(int **a, int *n, int x)
{
    int k = 0;
    for (int i = 0; i < *n; i++)
    {
        if ((*a)[i] != x)
        {
            (*a)[k] = (*a)[i];
            k++;
        }
    }
    *n = k;
    *a = (int *)realloc(*a, (*n) * sizeof(int));
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

    float tbc = tbc_chan_duong(a, n);
    if (tbc == 0)
        printf("Khong co so chan duong trong mang.\n");
    else
        printf("Trung binh cong cac so chan duong: %.2f\n", tbc);

    int x;
    printf("Nhap x can xoa: ");
    scanf("%d", &x);
    xoa_x(&a, &n, x);

    printf("Mang sau khi xoa cac phan tu bang %d: ", x);
    xuat_mang(a, n);
    free(a);
    return 0;
}