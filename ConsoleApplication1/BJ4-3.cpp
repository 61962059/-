#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {

	
	ios_base::sync_with_stdio(0);

	int N;
	//int arr[1000001];
	int num = 0;
	cin >> N;
	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[i] = num;
	}

	int max = arr[0];
	int min = arr[0];

	for (int k = 1; k < N; k++) {
		if (max < arr[k]) {
			max = arr[k];
		}

		else if (min > arr[k]) {
			min = arr[k];
		}
	}
	delete[] arr;
	cout << min << " " << max;

	return 0;
}