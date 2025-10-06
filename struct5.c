#include <stdio.h>
#include <string.h>
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
    Sach S1, S2;
    printf("\nNhap Ten Sach: ");
    fflush(stdin);
    gets(S1.TenSach);
    printf("\nNhap Tac Gia: ");
    fflush(stdin);
    gets(S1.TacGia);
    printf("\nNhap Nam Xuat Ban: ");
    scanf("%d", &S1.NamXB);
    printf("\nNhap Gia Ban: ");
    scanf("%f", &S1.Gia);
    memcpy(&S2, &S1, sizeof(Sach)); // gan S1 cho S2
    printf("\n%-25s%-20s%-10s%-10s", "Ten Sach", "Tac Gia", "Nam XB", "Gia Ban");
    printf("\n%-25s%-20s%-10d%-10.2f", S2.TenSach, S2.TacGia, S2.NamXB, S2.Gia);
    return 0;
}
