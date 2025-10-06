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
void Nhap_1_cuon(Sach *S)
{
    while (getchar() != '\n')
        ;
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
void Nhap_Mang_Sach(Sach *S, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nNhap thong tin cuon sach thu %d:", i + 1);
        Nhap_1_cuon(&S[i]);
    }
}
void HienThi_1cuon(Sach S)
{
    printf("\n|%-25s|%-20s|%-10d|%-10.2f|", S.TenSach, S.TacGia, S.NamXB, S.Gia);
    printf("\n|-------------------------|--------------------|----------|----------|");
}
void HienThi_Mang_Sach(Sach *S, int n)
{
    printf("\n|%-25s|%-20s|%-10s|%-10s|", "Ten Sach", "Tac Gia", "Nam XB", "Gia Ban");
    printf("\n|-------------------------|--------------------|----------|----------|");
    for (int i = 0; i < n; i++)
    {
        HienThi_1cuon(S[i]);
    }
}
int main()
{
    int n;
    printf("\nNhap so luong sach: ");
    scanf("%d", &n);
    Sach *ptr;
    ptr = (Sach *)malloc(n * sizeof(Sach));
    Nhap_Mang_Sach(ptr, n);
    HienThi_Mang_Sach(ptr, n);
    free(ptr);
    return 0;
}