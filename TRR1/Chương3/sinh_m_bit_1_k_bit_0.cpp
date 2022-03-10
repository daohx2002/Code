#include <iostream> //3.5
using namespace std;
bool check = true;
int n, k, m, arr[20] = {};

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
    cin >> k >> m >> n;
    while (check == true)
    {
        int test = 0;
        for (int i = 1; i <= n; i++)
        {
            int testk = 0;
            int testm = 0;
            if (arr[i] == 0)
            {
                for (int j = i + 1; j < i + k; j++)
                {
                    if (arr[j] == arr[i])
                        testk++;
                    else
                        break;
                }
            }
            if (arr[i] == 1)
            {
                for (int j = i + 1; j < i + m; j++)
                {
                    if (arr[j] == arr[i])
                        testm++;
                    else
                        break;
                }
            }
            if (testk == k - 1 && testm == m - 1)
                test++;
        }
        if (test == 1)
            input();
        sinh();
    }
    return 0;
}