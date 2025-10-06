#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int Ngay;
    int Thang;
    int Nam;
} Date;
typedef struct
{
    int MaSV;
    char HoTen[30];
    Date NgaySinh;
} SinhVien;
int main()
{
    SinhVien SV1;
    printf("Nhap Mã SV: ");
    scanf("%d", &SV1.MaSV);
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ; // xóa hết các ký tự còn lại trong buffer

    printf("Nhap Ho Ten: ");
    fflush(stdin);
    fgets(SV1.HoTen, sizeof(SV1.HoTen), stdin);
    SV1.HoTen[strcspn(SV1.HoTen, "\n")] = '\0';
    printf("Nhap Ngay-Thang-Nam Sinh: ");
    scanf("%d%d%d", &SV1.NgaySinh.Ngay, &SV1.NgaySinh.Thang, &SV1.NgaySinh.Nam);
    printf("\n%-10s%-30s%-15s", "Ma SV", "Ho Ten", "Ngay Sinh");
    printf("\n%-10d%-30s%02d-%02d-%04d", SV1.MaSV, SV1.HoTen, SV1.NgaySinh.Ngay, SV1.NgaySinh.Thang, SV1.NgaySinh.Nam);
    return 0;
}