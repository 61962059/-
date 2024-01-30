#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char* argv[]) {

	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int N = 9;
	int num = 0;
	int arr[9];

	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[i] = num;
	}

	int count;
	int max = 0;

	for (int k = 0; k < N; k++) {
		if (max < arr[k]) {
			max = arr[k];
			count = k;
		}
	}
	count += 1;
	cout << max << "\n" << count;

	return 0;
}