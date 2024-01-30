#include <iostream>
using namespace std;

int main() {
	int N, X;
	int arr[10000];

	cin >> N >> X;
	int num;

	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[i] = num;
	}

	for (int k = 0; k < N; k++) {
		if (arr[k] < X) {
			cout << arr[k]<<" ";
		}
	}

	return 0;
}