#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool la_nguyen_to(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

void xuat_nguyen_to(int *a, int n)
{
    printf("Cac so nguyen to trong mang: ");
    bool co = false;
    for (int i = 0; i < n; i++)
    {
        if (la_nguyen_to(a[i]))
        {
            printf("%d ", a[i]);
            co = true;
        }
    }
    if (!co)
        printf("Khong co so nguyen to nao.");
    printf("\n");
}

bool kiem_tra_x(int *a, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            return true;
    }
    return false;
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

    xuat_nguyen_to(a, n);

    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    if (kiem_tra_x(a, n, x))
        printf("%d co trong mang.\n", x);
    else
        printf("%d khong co trong mang.\n", x);

    free(a);
}