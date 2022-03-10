#include<iostream>
using namespace std;
bool B[20];
int A[20], n;

void input(){
	for(int i = 1; i <= n; i++)
		cout << A[i] << " ";
	cout << endl;
}

void Try(int i){
	int j;
	for(int j = 1; j <= n; j++){
		if(B[j] == false){
			A[i] = j;
			B[j] = true;
			if(i == n)
				input();
			else
				Try(i + 1);
			B[j] = false;
		}
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++)
		B[i] = false;
	Try(1);
	return 0;
}