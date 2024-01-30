#include<iostream>
using namespace std;

int main() {
	int T;
	int A = 0;
	int B = 0;
	cin >> T;
	int sum = 0;

	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		sum = A + B;
		cout << "Case #" << i + 1 << ": " << A <<" + " <<B<<" = "<<sum<< "\n";
	}
}