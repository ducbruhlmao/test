#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Nhap_Ma_Tran(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
}
void In_Ma_Tran(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void TimKiem(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] < 0)
        {
            printf("%d\t", a[i]);
        }
    }
}
int SNT(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void SNT_Mang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (SNT(a[i]))
            printf("%d\t", a[i]);
    }
}
int main()
{
    int n;
    int *a;
    do
    {
        printf("Nhập n: ");
        scanf("%d", &n);
    } while (n < 0);

    a = (int *)malloc(n * sizeof(n));
    Nhap_Ma_Tran(a, n);
    printf("Mảng vừa nhập:\n");
    In_Ma_Tran(a, n);
    printf("\nCác phần tử chẵn âm: \n");
    TimKiem(a, n);
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    if (SNT(x) == 1)
        printf("\nLa số nguyên tố\n");
    else
        printf("\nKhong la so nguyen to\n");
    SNT_Mang(a, n);
}