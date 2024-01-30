#include <iostream>
#include<algorithm>

using namespace std;

int main(int argc, const char* argv) {

	int N;
	double arr[1001];
	int a;
	cin >> N;

	//과목의 점수를 입력 받는다
	for (int i = 0; i < N; i++) {
		cin >> a;
		arr[i] = a;
	}

	int max = 0; //최대값을 max값에 저장
	for (int i = 0; i < N; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	//cout << max;
	//오류 없음 max값 정상작동

	double sum = 0;
	for (int i = 0; i < N; i++) {
		sum = sum + (arr[i] / max) * 100;
	}

	cout << sum / N;



	//cout.setf(ios::fixed);
	//cout.precision(16);


	return 0;
}