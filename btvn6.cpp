#include <stdio.h>
#include <stdlib.h>

void Nhap_Mang(int **a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void In_Mang(int **a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
int tong(int **a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }
    return sum;
}
int tong_cot_h(int **a, int n, int h)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i][h];
    }
    return sum;
}
int main()
{
    int **a;
    int n;
    int h;
    printf("Nhap n: ");
    scanf("%d", &n);
    a = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
    }
    Nhap_Mang(a, n);
    printf("Mang vua nhap: \n");
    In_Mang(a, n);
    printf("Tong duong cheo chinh: %d", tong(a, n));
    printf("\nNhap cot muon tinh: ");
    scanf("%d", &h);
    printf("Tong cot %d la: %d", h, tong_cot_h(a, n, h));
    free(a);
    return 0;
}