#include<iostream>
using namespace std;
int A[25], n;
bool B[25], Xuoi[25], Nguoc[25];

void input(){
	for(int i = 1; i <= n; i++){
		cout << A[i] << " ";
	}
	cout << endl;
}

void Try(int i){
	int j;
	for(int j = 1; j <= n; j++){
		if(B[j] == false && Xuoi[i - j + n] == false && Nguoc[i + j - 1] == false){
			A[i] = j;
			B[j] = true;
			Xuoi[i - j + n] = true;
			Nguoc[i + j - 1] = true;
			if(i == n)
				input();
			else
				Try(i + 1);
			B[j] = false;
			Xuoi[i - j + n] = false;
			Nguoc[i + j - 1] = false;
		}
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= 25; i++){
		B[i] = false;
	}
	for(int i = 1; i <= 25; i++){
		Xuoi[i] = false;
		Nguoc[i] = false;
	}
	Try(1);
	cout << endl;
	return 0;
}