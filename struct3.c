#include <stdio.h>
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
    printf("\n%-25s%-20s%-10s%-10s", "Ten Sach", "Tac Gia", "Nam XB", "Gia Ban");
    printf("\n%-25s%-20s%-10d%-10.2f", S1.TenSach, S1.TacGia, S1.NamXB, S1.Gia);
    return 0;
}
