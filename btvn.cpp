#include <stdio.h>
#include <stdlib.h>

int *NhapMang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=", i + 1);
        scanf("%d", &a[i]);
    }
    return a;
}

void InMang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=%d\n", i + 1, a[i]);
    }
}
int everage(int *a, int n)
{
    float total = 0.0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            total += a[i];
            count++;
        }
    }
    if (count == 0)
        return 0;
    else
        return total / count;
}

void increase(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}

int main()
{
    int *arr;
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    NhapMang(arr, n);
    printf("Mảng đã nhập: \n");
    InMang(arr, n);
    printf("TBC: %.2f", everage(arr, n));
    printf("\nMảng được sắp xếp tăng dần: \n");
    increase(arr, n);
    InMang(arr, n);
    free(arr);
    return 0;
}