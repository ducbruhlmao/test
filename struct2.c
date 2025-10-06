#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char MaKH[10], TenKH[25], Dia_ChiKH[50];
    int Nam_SinhKH;
} KH;
int main()
{
    KH KH1 = {"K001", "Nguyen Van A", "To 15, phuong Tu Liem", 1990};
    KH KH2 = {"K002", "Ho Duc B", "To 9,phuong Tu Liem", 1998};
    printf("\nThong Tin Khach Hang\n");
    printf("\n%10s%25s%25s%15s", "MaKH", "Ho va Ten KH", "Dia chi KH", "Nam sinh");
    printf("\n%10s%25s%25s%15d", KH1.MaKH, KH1.TenKH, KH1.Dia_ChiKH, KH1.Nam_SinhKH);
    printf("\n%10s%25s%25s%15d", KH2.MaKH, KH2.TenKH, KH2.Dia_ChiKH, KH2.Nam_SinhKH);
    printf("\n\n");
    printf("\n%-10s%-25s%-25s%-15s", "MaKH", "Ho va Ten KH", "Dia chi KH", "Nam sinh");
    printf("\n%-10s%-25s%-25s%-15d", KH1.MaKH, KH1.TenKH, KH1.Dia_ChiKH, KH1.Nam_SinhKH);
    printf("\n%-10s%-25s%-25s%-15d", KH2.MaKH, KH2.TenKH, KH2.Dia_ChiKH, KH2.Nam_SinhKH);
    return 0;
}