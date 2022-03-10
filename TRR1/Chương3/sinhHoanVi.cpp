#include<iostream>
using namespace std;
bool check = true;
int n, arr[20] = {};

void input(){
	for(int i = 1; i <= n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void sinh(){
	int t, d, c;
	int i = n - 1;
	while(arr[i] > arr[i + 1]){
		i--;
	}
	if(i == 0)
		check = false;
	else{
		int j = n;
		while(arr[j] < arr[i])
			j--;
		t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
		d = i + 1;
		c = n;
		while(d < c){
			t = arr[d];
			arr[d] = arr[c];
			arr[c] = t;
			d++;
			c--;
		}
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		arr[i] = i;
	}
	while(check){
		input();
		sinh();
	}
	return 0;
}
