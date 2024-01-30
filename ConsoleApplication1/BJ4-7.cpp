#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, const char* argv[]) {
	int n;
	int arr[31] = { 0, };
	int check[31];
	for (int i = 1; i <= 30; i++) {
		arr[i] = i;
	}

	for (int i = 1; i <= 28; i++) {
		cin >> n;
		arr[n] = 0;
	}

	for (int i = 1; i <= 30; i++) {
		if (arr[i] > 0) {
			cout <<arr[i] << "\n";
		}
	}
	//이건 출력값을 정렬하지 못해서 실패한 코드입니다.
}