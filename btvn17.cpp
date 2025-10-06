#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 1. Nhập dãy số thực động
void nhap_mang(float *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

// 2. Hiển thị dãy trên một hàng
void xuat_mang(float *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%.2f ", a[i]);
    printf("\n");
}

// 3. Kiểm tra có hai số âm bằng nhau cạnh nhau
bool am_bang_nhau_canh_nhau(float *a, int n)
{
    for (int i = 0; i < n - 1; i++)
        if (a[i] < 0 && a[i + 1] < 0 && a[i] == a[i + 1])
            return true;
    return false;
}

// 4. Tính trung bình cộng x giá trị đầu tiên
float tbc_x_dau(float *a, int n, int x)
{
    if (x > n || x <= 0)
        return 0;
    float tong = 0;
    for (int i = 0; i < x; i++)
        tong += a[i];
    return tong / x;
}

int main()
{
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    float *a = (float *)malloc(n * sizeof(float));
    if (!a)
    {
        printf("Khong cap phat duoc bo nho!\n");
        return 1;
    }

    nhap_mang(a, n);

    printf("Mang vua nhap: ");
    xuat_mang(a, n);

    if (am_bang_nhau_canh_nhau(a, n))
        printf("Co hai so am bang nhau va canh nhau trong mang.\n");
    else
        printf("Khong co hai so am bang nhau va canh nhau trong mang.\n");

    int x;
    printf("Nhap x (so nguyen): ");
    scanf("%d", &x);
    float tbc = tbc_x_dau(a, n, x);
    if (tbc == 0)
        printf("Khong tinh duoc trung binh cong %d gia tri dau tien.\n", x);
    else
        printf("Trung binh cong %d gia tri dau tien: %.2f\n", x, tbc);

    free(a);
    return 0;
}