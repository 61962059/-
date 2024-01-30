#include<iostream>
using namespace std;

int main() {
	int A;
	cin >> A;
	if (A % 4 == 0) {
		if (A % 100 == 0) {
			if (A % 400 == 0) {
				cout << "1";
			}
			else {
				cout << "0";
			}
		}
		else {
			cout << "1";
		}
	}
	else {
		cout << "0";
	}
}