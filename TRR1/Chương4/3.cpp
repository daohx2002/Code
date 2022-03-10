#include <iostream>
using namespace std;
int x[30];
int thue[30][30];
int m, n;
int giatri = 0;
int kq[30];
int check[30];

void input()
{
	cout << "So nguoi thue may: ";
	cin >> m;
	cout << "So ngay cho thue may: ";
	cin >> n;
	cout << "Ma tran bieu thi nguoi i thue may vao nhung ngay nao:" << endl;
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			cin >> thue[i][j];
}

void result()
{
	cout << "So ngay cho thue nhieu nhat: " << giatri << endl;
	cout << "Phuong an cho thue may:" << endl;
	for (int i = 1; i <= m; i++)
		cout << kq[i] << " ";
}

void xuly()
{
	for (int i = 1; i <= n; i++)
		check[i] = 0;
	int temp = 0;
	for (int i = 1; i <= m; i++)
	{
		if (x[i] == 1)
		{
			for (int j = 1; j <= n; j++)
			{
				if (check[j] == 1 && thue[i][j] == 1)
					return;
				else
				{
					if (thue[i][j] == 1 && check[j] == 0)
					{
						temp++;
						check[j] = 1;
					}
				}
			}
		}
	}
	if (temp > giatri)
	{
		giatri = temp;
		for (int i = 1; i <= m; i++)
			kq[i] = x[i];
	}
}

void Try(int i)
{
	for (int j = 0; j <= 1; j++)
	{
		x[i] = j;
		if (i == m)
			xuly();
		else
			Try(i + 1);
	}
}

int main()
{
	input();
	Try(1);
	result();
	return 0;
}