#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char TenSach[25];
    char TacGia[20];
    int NamXB;
    float Gia;
} Sach;
void Nhap(Sach *S)
{
    printf("\nNhap Ten Sach: ");
    fflush(stdin);
    fgets(S->TenSach, sizeof(S->TenSach), stdin);
    S->TenSach[strcspn(S->TenSach, "\n")] = '\0';
    printf("\nNhap Tac Gia: ");
    fflush(stdin);
    fgets(S->TacGia, sizeof(S->TacGia), stdin);
    S->TacGia[strcspn(S->TacGia, "\n")] = '\0';
    printf("\nNhap Nam Xuat Ban: ");
    scanf("%d", &S->NamXB);
    printf("\nNhap Gia Ban: ");
    scanf("%f", &S->Gia);
}
void HienThi(Sach S)
{
    printf("\n%-25s%-20s%-10s%-10s", "Ten Sach", "Tac Gia", "Nam XB", "Gia Ban");
    printf("\n%-25s%-20s%-10d%-10.2f", S.TenSach, S.TacGia, S.NamXB, S.Gia);
}
int main()
{
    Sach *ptr;
    ptr = (Sach *)malloc(sizeof(Sach));
    Nhap(ptr);
    HienThi(*ptr);
    free(ptr);
    return 0;
}