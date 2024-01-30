#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, const char* argv[]) {
		/* 예시
		5 4
		1 2 
		3 4 
		1 4
		2 2

		3 1 4 2 5 결과
		*/
		int N, M;
		cin >> N >> M;
		int arr[101] = { 0, };

		for (int i = 1; i <= N; i++) {
			arr[i] = i;
		}

		int a, b, c = 0;

		for (int i = 0; i < M; i++) {
			
			cin >> a >> b;

			c = arr[a];
			arr[a] = arr[b];
			arr[b] = c;
			
		}

		for (int i = 1; i <= N; i++) {
			cout << arr[i] << " ";
		}
}