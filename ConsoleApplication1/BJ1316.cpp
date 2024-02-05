#include <iostream>
#include<stdio.h>
#include<string>
#include<string.h>

using namespace std;

int main() {
	int N; 
	int count = 0;
	string word;
	cin >> N;

	for (int j = 0; j < N; j++) {	
		cin >> word;

		bool alphabet[26] = { false,};
		alphabet[(int)(word[0]) - 97] = true;

		for (int i = 1; i < word.size(); i++) {
			if (word[i] == word[i - 1]) {
				continue;
			}
			else if (word[i] != word[i - 1] && alphabet[(int)(word[i])-97] == true) {
				count++;
				break;
			}
			else {
				alphabet[(int)(word[i])-97] = true;
			}
		}
	}
	cout << N - count;
	return 0;
}