#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n - 1; i++)
	{ // sau lần đầu tiên thì số lớn nhất chắc chắn ở cuối dãy nên là chỉ cần n - 1 lần duyệt
		bool check = false;
		for (int j = 0; j < n - i - 1; j++)
		{ // sau mỗi lần duyệt thì số lớn nhất trong lần duyệt về cuối dãy nên chỉ cần duyệt đến phần tử trước phần tử ý ở lần duyệt tiếp theo
			if (arr[j + 1] < arr[j])
			{
				swap(arr[j + 1], arr[j]);
				check = true;
			}
		}
		if (check == false)
			break;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}

/*
Xuất phát từ đầu dãy, so sánh 2 phần tử cạnh nhau để đưa phần tử nhỏ hơn lên
trước, sau đó lại xét cặp tiếp theo cho đến khi tiến về đầu dãy. Nhờ vậy, ở lần
xử lý thứ I sẽ tìm được phần tử ở vị trí đầu dãy là i.
*/
