#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void Nhap(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}
void Xuat(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
bool ktra_canh_nhau(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && a[i + 1] > 0 && a[i] == a[i + 1])
        {
            return true;
            break;
        }
    }
    return false;
}
void Giam_dan(int **a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((*a)[i] < (*a)[j])
            {
                int temp = (*a)[i];
                (*a)[i] = (*a)[j];
                (*a)[j] = temp;
            }
        }
    }
}
int main()
{
    int *a;
    int n;
    a = (int *)malloc(n * sizeof(int));
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    Nhap(a, n);
    printf("Mang vua nhap: \n");
    Xuat(a, n);
    if (ktra_canh_nhau(a, n))
        printf("\nCó");
    else
        printf("\nKhông có");
    Giam_dan(&a, n);
    printf("\nMang sx giam dan: \n");
    Xuat(a, n);
    free(a);
    return 0;
}