#include<iostream>
#include<string.h>

using namespace std;

/*
* 도화지 배열을 100*100인 이중배열을 만들자
* 시작 배열 위치를 중심으로 오른쪽 10, 위로 10까지 배열을 채우자
* 채워진 배열의 숫자를 모두 더해서 출력하자.
*/

int main() {
	int arr[101][101] = { 0, };
	int x, y, N = 0;
	int cnt = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		for (int j = 0; j < 10; j++ ) {
			for (int k = 0; k < 10; k++) {
				arr[x + j][y + k] = 1;
			}
		}
	}
	
	for (int i = 0; i < 101; i++){
		for (int j = 0; j < 101; j++) {
			if (arr[i][j] == 1) {
				cnt++;
			}
			else {
				continue;
			}
		}
	}
	cout << cnt;
}