#include <stdio.h>
#include <stdlib.h>

float **nhapMaTran(int rows, int cols)
{
    float **arr = (float **)malloc(rows * sizeof(float *));
    for (int i = 0; i < rows; i++)
    {
        arr[i] = (float *)malloc(cols * sizeof(float));
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Nhập arr[%d][%d]: ", i, j);
            scanf("%f", &arr[i][j]);
        }
    }
    return arr;
}

void inMaTran(float **arr, int rows, int cols)
{
    printf("Ma trận vừa nhập:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%.2f ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols;
    printf("Nhập số hàng: ");
    scanf("%d", &rows);
    printf("Nhập số cột: ");
    scanf("%d", &cols);

    float **arr = nhapMaTran(rows, cols);
    inMaTran(arr, rows, cols);

    for (int i = 0; i < rows; i++)
    {
        free(arr[i]);
    }
    free(arr);
    return 0;
}