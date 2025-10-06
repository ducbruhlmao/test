#include <stdio.h>
#include <stdlib.h>
void Nhap_Mang(int **a, int n)
{
    *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &(*a)[i]);
    }
}
void In_Mang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void chia_ba(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0 && a[i] < 50)
        {
            printf("%d\t", a[i]);
        }
    }
}
void add_x(int **a, int *n, int x, int k)
{
    if (k > *n)
        k = *n;
    if (k < 0)
        k = 0;
    *a = (int *)realloc(*a, ((*n + 1) * sizeof(int)));
    for (int i = *n; i >= k; i--)
    {
        (*a)[i] = (*a)[i - 1];
    }
    (*a)[k] = x;
    (*n)++;
}
int main()
{
    int *a;
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    Nhap_Mang(&a, n);
    printf("Mang vua nhap: \n");
    In_Mang(a, n);
    printf("\nCác phần tử chia hết cho 3 và nhỏ hơn 50:\n");
    chia_ba(a, n);
    int x;
    printf("\nNhap x: ");
    scanf("%d", &x);
    int k;
    printf("\nNhap vi tri: ");
    scanf("%d", &k);
    printf("\nMang sau khi chen:\n");
    add_x(&a, &n, x, k);
    In_Mang(a, n);
    free(a);
    return 0;
}