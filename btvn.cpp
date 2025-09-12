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

int main()
{
    int *arr;
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    NhapMang(arr, n);
    InMang(arr, n);
    free(arr);
    return 0;
}