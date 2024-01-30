#include <iostream>
#include<string.h>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	// 1 3 5 7 9
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int k = N-1-i; k > 0; k--) {
			cout << " ";
		}
		for (int k = i*2 + 1; k > 0; k--) {
			cout << "*";
		}
		cout << "\n";
	}// 1 3 5 7 9 별 그리기 성공

	// 7 5 3 1
	//2*N -(N+1)
	for (int i = 0; i < (2*N)-(N+1); i++) {
		for (int k = 0; k <= i; k++) {
			cout << " ";
		}
		for (int k = 2*i; k < N * 2 - 3; k++) {
			cout << "*";
		}
		cout << "\n";
	}
}
