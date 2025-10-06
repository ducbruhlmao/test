#include <stdio.h>
#include <stdlib.h>

void Nhap_Mang(float *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%f", &a[i]);
    }
}
void In_Mang(float *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%.3f\t", a[i]);
    }
}
float Tim_Kiem(float *a, int n)
{
    float max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max > a[i])
            max = a[i];
    }
    return max;
}
void vt_max(float *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (Tim_Kiem(a, n) == a[i])
        {
            printf("%d\t", i);
        }
    }
}
int check(float *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Nhập n: ");
    scanf("%d", &n);
    float *a = (float *)malloc(n * sizeof(float));
    Nhap_Mang(a, n);
    printf("\nMang vua nhap:\n");
    In_Mang(a, n);
    printf("\nGia tri nho nhat trong mang: %.3f\n", Tim_Kiem(a, n));
    printf("Vị trí: ");
    vt_max(a, n);
    if (check(a, n))
        printf("\nDa la day tgnh\n");
    else
        printf("\nKhong phai");
}