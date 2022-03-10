#include <iostream> //3.4
using namespace std;
bool check = true;
int n, k, arr[20] = {};

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
    cin >> k >> n;
    while (check == true)
    {
        int test = 0;
        for (int i = 1; i <= n; i++)
        {
            int test1 = 0;
            if (arr[i] == 1)
            {
                for (int j = i + 1; j < i + k; j++)
                {
                    if (arr[j] == arr[i])
                        test1++;
                    else
                        break;
                }
            }
            if (test1 == k - 1)
                test++;
        }
        if (test == 1)
            input();
        sinh();
    }
    return 0;
}