#include <stdio.h>
#include <math.h>
int USCLN(int a, int b)
{
    while (b != 0)
    {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int KT_SNT(int a)
{
    int dem = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            dem++;
        }
    }
    if (dem == 2)
        return 1;
    else
        return 0;
}
int KT_SHH(int a)
{
    int sum = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    return sum == a;
}
int KT_SCP(int a)
{
    int k = sqrt(a);
    return k * k == a;
}
void Hoan_Vi(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void tam_giac(int h)
{
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
int Dao_CS(int h)
{
    int chua = 0;
    while (h != 0)
    {
        int digital = h % 10;
        chua = chua * 10 + digital;
        h /= 10;
    }
    return chua;
}
int main()
{
    int h;
    scanf("%d", &h);
    printf("%d\n", h);
    printf("%d", Dao_CS(h));
    return 0;
}