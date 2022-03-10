#include <iostream>
using namespace std;
int n, arr[20];

void input()
{
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Try(int i)
{
    int j;
    for (int j = 0; j <= 1; j++)
    {
        arr[i] = j;
        if (i == n)
            input();
        else
            Try(i + 1);
    }
}

int main()
{
    cin >> n;
    Try(1);
    return 0;
}