#include <iostream> //3.4
using namespace std;
bool check = true;
int n, k;
char arr[20];

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
    while (arr[i] == 'A')
    {
        arr[i] = 'B';
        i--;
    }
    if (i == 0)
        check = false;
    else
        arr[i] = 'A';
}

int main()
{
    cin >> k >> n;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = 'A';
    }
    while (check == true)
    {
        int test = 0;
        for (int i = 1; i <= n; i++)
        {
            int test1 = 0;
            if (arr[i] == 'A')
            {
                for (int j = i + 1; j < i + k; j++)
                {
                    if (arr[j] == 'A')
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