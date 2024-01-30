#include<iostream>
using namespace std;

int main() {
	int A, B, T;
	cin >> T;
	int i = 0;
	int k[100];  //가변배열 공부하기
	for (i = 0; i < T; i++) {
		cin >> A >> B;
		k[i] = A + B;
	}
	
	for (i = 0; i < T; i++) {
		cout << k[i] << endl;
	}
}