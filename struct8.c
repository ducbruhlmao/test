#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char TenSach[25];
    char TacGia[20];
    int NamXB;
    float Gia;
} Sach;
void HienThi(Sach S)
{
    printf("\n%-25s%-20s%-10s%-10s", "Ten Sach", "Tac Gia", "Nam XB", "Gia Ban");
    printf("\n%-25s%-20s%-10d%-10.2f", S.TenSach, S.TacGia, S.NamXB, S.Gia);
}
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
    HienThi(*ptr);
    free(ptr);
    return 0;
}