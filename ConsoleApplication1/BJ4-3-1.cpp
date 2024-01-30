#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char* argv[]) {


	ios_base::sync_with_stdio(0);

	int N;
	int arr[1000001];
	//실행시 메모리 오류 뜨지만 사이트에선 정답
	//해결방안 1) 동적메모리 2) 배열미사용
	int num = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[i] = num;
	}

	sort(arr, arr+N);

	cout << arr[0] << " " << arr[N-1];

	return 0;
}