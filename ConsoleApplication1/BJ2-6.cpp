#include<iostream>
using namespace std;

int main() {
	int A, B, C;
	int hour, min;
	cin >> A >> B >> C;
	min = 60*A + B;
	min += C;
	hour =  (min/60) % 24;
	int minute = min % 60;
	cout << hour<< " " << minute;
}