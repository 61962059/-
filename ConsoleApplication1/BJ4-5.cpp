#include<iostream>
#include<algorithm>
using namespace std;


int main(int argc, const char* argv[]) {
	/* 예시
	0 0 0 0 0
	3 3 0 0 0
	3 3 4 4 0
	1 2 1 1 0

	1 2 1 1 0 결과
	*/
	int N, M;
	cin >> N >> M;
	int arr[100];
	
	for (int i = 0; i < N; i++) {
		arr[i] = 0;
	}
	
	for (int i = 0; i < M; i++) {
		int z, x, c = 0;
		cin >> z >> x >> c;
		for (int k = z-1; k < x; k++) { 
			arr[k] = c;
		}

	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}