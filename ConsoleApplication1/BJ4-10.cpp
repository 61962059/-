#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, const char* argv) {
	/*
	역순

	5 4    1 2 3 4 5
	1 2    2 1 3 4 5
	3 4    2 1 4 3 5
	1 4    3 4 1 2 5
	2 2    3 4 1 2 5
	오름차순 내림차순이 아닌 역순
	*/
	int arr[101] = { 0, };
	int N,M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}

	
	int a, b;

	while (M--) {
		cin >> a >> b;

		for (int i = 0; i <= (b - a) / 2; i++) {
			swap(arr[a + i], arr[b - i]);
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << arr[i]<<" ";
	}

	return 0;
}