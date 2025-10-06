#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Nhap_Mang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
}
void In_Mang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void Tim_Kiem(int *a, int n)
{
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0 && a[i] > 0)
        {
            printf("%d\t", a[i]);
            check = 1;
        }
    }
    if (!check)
        printf("Khong co\n");
}
int scp(int x)
{
    int k = sqrt(x);
    return k * k == x;
}
void ht(int *a, int n)
{
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if (scp(a[i]))
        {
            printf("%d\t", a[i]);
            check = 1;
        }
    }
    if (!check)
        printf("Khong co\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    Nhap_Mang(a, n);
    printf("\nCac phan tu vua nhap: \n");
    In_Mang(a, n);
    printf("\nCac phan tu le duong:\n");
    Tim_Kiem(a, n);
    int x;
    scanf("%d", &x);
    if (scp(x))
        printf("\nLa so cp");
    else
        printf("\nKhong la so cp");
    printf("\nCac so cp trong mang:\n");
    ht(a, n);
}