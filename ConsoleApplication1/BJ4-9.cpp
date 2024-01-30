#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char* argv) {
	
	int A;
	int B = 42;
	int arr[42];

	for (int i = 0; i < 42; i++) {
		arr[i] = 0;
	}

	for (int i = 0; i < 10; i++) {
		cin >> A;
		arr[A%42] = 1;
	}

	int cnt = 0;

	for (int i = 0; i < 42; i++) {
		if (arr[i] == 1) {
			cnt += 1;
		}
	}

	cout << cnt;

	return 0;
}