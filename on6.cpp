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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 5 == 0 && a[i] < 0)
        {
            sum += a[i];
            check = 1;
        }
    }
    if (!check)
        printf("Khong co\n");
    else
        printf("\nTong: %d", sum);
}
int scp(int x)
{
    int shh = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            shh += i;
        }
    }
    return shh == x;
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
        printf("\nLa so hh");
    else
        printf("\nKhong la so hh");
    printf("\nCac so hh trong mang:\n");
    ht(a, n);
}