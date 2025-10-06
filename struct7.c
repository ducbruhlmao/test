#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char TenSach[25];
    char TacGia[20];
    int NamXB;
    float Gia;
} Sach;
int main()
{
    Sach *ptr;
    ptr = (Sach *)malloc(sizeof(Sach));
    printf("\nNhap Ten Sach: ");
    fflush(stdin);
    gets(ptr->TenSach);
    printf("\nNhap Tac Gia: ");
    fflush(stdin);
    gets(ptr->TacGia);
    printf("\nNhap Nam Xuat Ban: ");
    scanf("%d", &ptr->NamXB);
    printf("\nNhap Gia Ban: ");
    scanf("%f", &ptr->Gia);
    printf("\n%-25s%-20s%-10s%-10s", "Ten Sach", "Tac Gia", "Nam XB", "Gia Ban");
    printf("\n%-25s%-20s%-10d%-10.2f", ptr->TenSach, ptr->TacGia, ptr->NamXB, ptr->Gia);
    free(ptr);
    return 0;
}