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
void sap_xep_cot_0(int ***a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((*a)[i][0] < (*a)[j][0])
            {
                int temp = (*a)[i][0];
                (*a)[i][0] = (*a)[j][0];
                (*a)[j][0] = temp;
            }
        }
    }
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
    sap_xep_cot_0(&a, n);
    printf("\nMang sau khi sap xep cot 0 tang dan: \n");
    In_Mang(a, n);
    for (int i = 0; i < n; i++)
    {
        free(a[i]);
    }
    free(a);
    return 0;
}