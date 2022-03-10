#include<iostream>
using namespace std;
int n, k, arr[20];

void input(){
	for(int i = 1; i <= k; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void Try(int i){
	int j;
	for(int j = arr[i - 1] + 1; j <= n - k + i; j++){
		arr[i] = j;
		if(i == k)
			input();
		else
			Try(i + 1);
	}
}

int main(){
	cin >> n >> k;
	Try(1);
	return 0;
}