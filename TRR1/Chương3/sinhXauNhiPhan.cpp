#include <iostream> 
using namespace std;
bool check = true;
int n, arr[20] = {};

void input()
{
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sinh()
{
    int i = n;
    while (arr[i] == 1)
    {
        arr[i] = 0;
        i--;
    }
    if (i == 0)
        check = false;
    else
        arr[i] = 1;
}

int main()
{
    cin >> n;
    while (check == true)
    {
        input();
        sinh();
    }
    return 0;
}
