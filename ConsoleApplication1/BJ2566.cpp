#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {
	int arr[9][9];
	int num;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> num;
			arr[i][j] = num;
		}
	} // ???? ?

	int max = 0;
	int x, y;
	
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
				x = i;
				y = j;
			}
		}
	}

	cout << max;
	cout << x << y;
}