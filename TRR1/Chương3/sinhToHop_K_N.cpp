#include <iostream>
using namespace std;
bool check = true;
int n, k;
int arr[20] = {};

void input()
{
    for (int i = 1; i <= k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sinh()
{
    int i = k;
    while (arr[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
        check = false;
    else
    {
        arr[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            arr[j] = arr[j - 1] + 1;
        }
    }
}

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        arr[i] = i;
    }
    while (check == true)
    {
        input();
        sinh();
    }
    return 0;
}
