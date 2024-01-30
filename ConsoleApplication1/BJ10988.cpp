#include <iostream>
#include<string>
#include<string.h>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main() {
	
	char a[1000001];
	cin >> a;
	int len = strlen(a);
	int arr[26] = { 0 };
	int max = 0, same = 0;
	char ans=0;
	//대문자 소문자 구분 없애주기 ++ 각 알파벳 갯수 측정
	for (int i = 0; i < len; i++) {
		if (a[i] >= 'a') {
			arr[a[i] - 'a']++;
		}
		else {
			arr[a[i] - 'A']++;
		}
	}
	//갯수 많은거 대문자로 골라내기! ++ 최대값 같으면 ? 출력
	for (int i = 0; i < 26; i++) {
		if (arr[i] == max) {
			ans = '?';
		}
		else if (arr[i] > max) {
			max = arr[i];
			ans = i + 'A';
		}
	}
	cout << ans;
}