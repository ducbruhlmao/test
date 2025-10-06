#include <stdio.h>
#include <stdlib.h>
void Nhap_Ma_Tran(int m, int n, int **a)
{
    for (int i = 0; i < m; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", (*(a + i) + j));
        }
    }
}
void In_Ma_Tran(int m, int n, int **a)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Địa chỉ của phần tử thứ %d %d là %d\n", i, j, (*(a + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int **a;
    int m, n;
    printf("Nhap so hang: ");
    scanf("%d", &m);
    printf("Nhap so cot: ");
    scanf("%d", &n);
    a = (int **)malloc(m * sizeof(int *));
    Nhap_Ma_Tran(m, n, a);
    printf("Ma tran vua nhap la:\n");
    In_Ma_Tran(m, n, a);
    free(a);
}