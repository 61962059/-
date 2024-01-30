#include<iostream>
using namespace std;

int main() {
	int A;
	cin >> A;
	if (A >= 90) {
		cout << "A";
	}
	else if (A>=80 && A<90) {
		cout << "B";
	}
	else if (A>=70 && A<80) {
		cout << "C";
	}
	else if (A>=60 && A <70) {
		cout << "D";
	}
	else {
		cout << "F";
	}
}