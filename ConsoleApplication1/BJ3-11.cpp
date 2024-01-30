#include<iostream>
using namespace std;

int main() {
	int N;
	
	cin >> N;
	for (int row = 1; row <= N; row++) {
		
		for (int k = 0; k < N-row; k++) { // 공백의 수
			cout << " ";
		}
		for (int i = 0; i < row; i++) {
			cout << "*";
		}
		cout << "\n";
	}
}

