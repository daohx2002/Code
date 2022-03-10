// liệt kê tát cả các phương án đi từ vị trí (0, 0) đến vị trí (n, m) trên hình chữ nhật n*m hình vuông đơn vị
// bước ngang là N, bước đứng D
// n là chiều đứng của hình còn m là chiều ngang của hình
// biến đổi chọn lọc từ dãy nhị phân được sinh ra
#include <iostream> //3.2
using namespace std;
bool check = false;
char arr[20];
int m, n;
int a;

void input()
{
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sinhKeTiep()
{
    int i = a - 1;
    while (arr[i] == 'D')
    {
        arr[i] = 'N';
        i--;
    }
    if (i < 0)
        check = true;
    else
        arr[i] = 'D';
}

int main()
{
    cin >> m >> n;
    a = m + n;
    for (int i = 0; i < a; i++)
    {
        arr[i] = 'N';
    }
    while (check == false)
    {
        int test = 0;
        for (int i = 0; i < a; i++)
        {
            if (arr[i] == 'N')
                test++;
        }
        if (test == n)
            input();
        sinhKeTiep();
    }
    return 0;
}