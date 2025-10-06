#include <stdio.h>

struct Sach
{
    char TenSach[25];
    char TacGia[20];
    int NamXB;
    float Gia;
};
struct Sv
{
    char MaSV[10];
    char TenSV[20];
    float Diem_Toan, Diem_Ly, Diem_Anh;
};
typedef struct
{
    char MaSV[10];
    char TenSV[20];
    float Diem_Toan, Diem_Ly, Diem_Anh;
} Sv;
struct SoPhuc
{
    int thuc;
    int ao;
};

struct SoPhuc sp;

typedef struct
{
    int thuc;
    int ao;
} SoPhuc;
SoPhuc sp;

int main()
{
    return 0;
}