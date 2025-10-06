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
        printf("%.2f\n", a[i]);
    }
}
float Minn(float *a, int n)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    float *a;
    a = (float *)malloc(n * sizeof(float));
    Nhap_Mang(a, n);
    printf("Mang vua nhap: \n");
    In_Mang(a, n);
    printf("Phan tu nho nhat trong mang: %.2f", Minn(a, n));
    return 0;
}