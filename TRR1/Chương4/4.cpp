#include<iostream>
using namespace std;
int x[30];
int cv[30][30];
int n;
int check[30];
int giatri = 2147483647;
int kq[30];

void input(){
	cout << "So qua trinh: ";
	cin >> n;
	cout << "Ma tran bieu thi thoi gian xu li cong viec v tai qua trinh n:" << endl;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cin >> cv[i][j];
}

void result(){
	cout << "Gia tri toi uu la: " << giatri << "\nLua chon toi uu la: ";
	for(int i = 1; i <= n; i++)
		cout << kq[i] << " ";
}

void xuly(){
	int temp = 0;
	for(int i = 1; i <= n; i++){
		temp += cv[x[i]][i];
	}
	if(temp < giatri){
		giatri = temp;
		for(int i = 1; i <= n; i++)
			kq[i] = x[i];
	}
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(check[j] == 0){
			x[i] = j;
			check[j] = 1;
			if(i == n){
				xuly();
			}
			else
				Try(i + 1);
			check[j] = 0;
		}
	}
}

int main(){
	input();
	Try(1);
	result();
	return 0;
}