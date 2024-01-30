#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main() {
	string A;
	cin >> A;
	int cnt, max = 0;
	int arr[55]; //알파벳 소문자 대문자 갯수 26 + 26
	for (int i = 0; i < A.length(); i++) {
		for (int j = i + 1; j < A.length(); i++) {
			if (A[i] == A[j]) {
				cnt = cnt + 1;
			}
			if (cnt > max) {
				max == A[i];
			}
			cnt = 0;
		}
	}
	cout << max;
}
