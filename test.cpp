#include <iostream>
using namespace std;

const int N = 8;

// Bàn cờ mẫu
int ban_co[N][N] = {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 1, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0}};

bool hang[N], cot[N], cheo1[2 * N], cheo2[2 * N];

// Lưu kết quả tạm và tốt nhất
int dap_an_tam[N * N][2], so_tam = 0;
int dap_an_tot[N * N][2], so_tot = 1000;

bool bi_khong_che(int h, int c)
{
    return hang[h] || cot[c] || cheo1[h - c + N] || cheo2[h + c];
}

void danh_dau(int h, int c, bool val)
{
    hang[h] = val;
    cot[c] = val;
    cheo1[h - c + N] = val;
    cheo2[h + c] = val;
}

bool tat_ca_bi_khong_che()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (ban_co[i][j] == 0 && !bi_khong_che(i, j))
                return false;
        }
    }
    return true;
}

void quay_lui(int h, int c)
{
    if (h == N)
    {
        if (tat_ca_bi_khong_che())
        {
            if (so_tam < so_tot)
            {
                so_tot = so_tam;
                for (int i = 0; i < so_tam; i++)
                {
                    dap_an_tot[i][0] = dap_an_tam[i][0];
                    dap_an_tot[i][1] = dap_an_tam[i][1];
                }
            }
        }
        return;
    }

    int next_h = h, next_c = c + 1;
    if (next_c == N)
    {
        next_h++;
        next_c = 0;
    }

    // Nếu ô này là 0 và chưa bị khống chế → thử đặt vọng gác
    if (ban_co[h][c] == 0 && !bi_khong_che(h, c))
    {
        dap_an_tam[so_tam][0] = h;
        dap_an_tam[so_tam][1] = c;
        so_tam++;
        danh_dau(h, c, true);

        quay_lui(next_h, next_c);

        danh_dau(h, c, false);
        so_tam--;
    }

    // Trường hợp bỏ qua ô này
    quay_lui(next_h, next_c);
}

int main()
{
    quay_lui(0, 0);

    if (so_tot == 1000)
    {
        cout << "Khong co cach dat" << endl;
    }
    else
    {
        for (int i = 0; i < so_tot; i++)
        {
            cout << dap_an_tot[i][0] << dap_an_tot[i][1] << " ";
        }
        cout << endl;
        cout << "Tong so vong gac = " << so_tot << endl;
    }
    return 0;
}