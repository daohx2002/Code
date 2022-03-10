#include<iostream>
using namespace std;
int dem =0;
void chuyen(int n, char nguon, char trunggian, char dich){
	if(n == 1)
		cout << nguon << " ==> " << dich << endl;
		dem++;
	else{
		chuyen(n - 1, nguon, dich, trunggian);
		chuyen(1, nguon, trunggian, dich);
		chuyen(n - 1, trunggian, nguon, dich);
	}
}

int main(){
	int n;
	cout << "Nhap vao so dia: ";
	cin >> n;
	chuyen(n, 'A', 'B', 'C');
	// A la nguon
	// B la trung gian
	// C la dich
	cout << dem;
	return 0;
}
