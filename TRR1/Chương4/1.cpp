#include <iostream>
using namespace std;
int n, b;
int a[100];
int c[100];
int x[100];
int xopt[100];
int opt;

void input()
{
	cout << "So do vat: ";
	cin >> n;
	cout << "Trong luong toi da: ";
	cin >> b;
	cout << "Trong luong tung do vat: ";
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	cout << "Gia tri su dung tung do vat: ";
	for (int i = 1; i <= n; i++)
	{
		cin >> c[i];
	}
}

bool check_weight()
{
	int weight = 0;
	for (int i = 1; i <= n; i++)
	{
		weight += a[i] * x[i];
	}
	if (weight > b)
	{
		return false;
	}
	return true;
}

void sum_up()
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += x[i] * c[i];
	}
	if (opt < sum)
	{
		opt = sum;
		for (int i = 1; i <= n; i++)
		{
			xopt[i] = x[i];
		}
	}
}

void back_track(int i)
{
	for (int j = 0; j <= 1; j++)
	{
		x[i] = j;
		if (i == n)
		{
			if (check_weight())
			{
				sum_up();
			}
		}
		else
			back_track(i + 1);
	}
}

void result()
{
	cout << "Phuong an toi uu: " << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << xopt[i] << " ";
	}
	cout << endl
		 << "Gia tri su dung toi uu: " << endl
		 << opt << endl;
}

int main()
{
	input();
	back_track(1);
	result();
	return 0;
}