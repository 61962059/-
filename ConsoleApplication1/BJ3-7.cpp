#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	int A, B;
	
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << A + B << "\n";
	}
}