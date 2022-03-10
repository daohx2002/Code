#include <iostream>
using namespace std;
int x[30];
int dulich[30][30];
int n;
int check[30];
int giatri = 2147483647;
int kq[30];

void input()
{
	cout << "So thanh pho di qua: ";
	cin >> n;
	cout << "Ma tran bieu dien chi phi tu TP i -> TP j:" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> dulich[i][j];
		}
	}
}

void result()
{
	cout << "Gia tri toi uu la: " << giatri << "\nLua chon toi uu la: ";
	for (int i = 1; i <= n + 1; i++)
	{
		cout << kq[i] << " ";
	}
}

void xuly()
{
	int temp = dulich[1][x[2]];
	for (int i = 2; i < n; i++)
	{
		temp += dulich[x[i]][x[i + 1]];
	}
	temp += dulich[x[n]][1];
	if (temp < giatri)
	{
		giatri = temp;
		kq[1] = 1;
		for (int i = 2; i <= n; i++)
			kq[i] = x[i];
		kq[n + 1] = 1;
	}
}

void Try(int i)
{
	for (int j = 2; j <= n; j++)
	{
		if (check[j] == 0)
		{
			x[i] = j;
			check[j] = 1;
			if (i == n)
			{
				xuly();
			}
			else
				Try(i + 1);
			check[j] = 0;
		}
	}
}

int main()
{
	input();
	Try(2);
	result();
	return 0;
}