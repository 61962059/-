#include <iostream>
using namespace std;

int main() {
	int arr[100];
	int N;
	int num;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[i] = num;
	}
	int find;
	int count = 0;
	cin >> find;
	for (int k = 0; k < N; k++) {
		if (arr[k] == find) {
			count += 1;
		}
	}
	cout << count;
	return 0;
}