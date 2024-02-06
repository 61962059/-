#include<iostream>
#include<string>
#include<string.h>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int arr1[100][100] = { 0, };
	int arr2[100][100] = { 0, };
	int arr3[100][100] = { 0, };
	int num;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> num;
			arr1[i][j] = num;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> num;
			arr2[i][j] = num;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << arr3[i][j];
			cout << " ";
		}
		cout << '\n';
	}
}