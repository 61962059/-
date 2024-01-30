#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char* argv[]) {
    int n;
    int arr[31] = { 0, };

    for (int i = 1; i <= 30; i++) {
        arr[i] = i;
    }

    for (int i = 1; i <= 28; i++) {
        cin >> n;
        arr[n] = 0;
    }

    int sortedArr[31]; // 정렬된 값을 저장할 배열
    int sortedIndex = 1;

    for (int i = 1; i <= 30; i++) {
        if (arr[i] > 0) {
            sortedArr[sortedIndex++] = arr[i];
        }
    }

    // 0이 아닌 값들을 정렬
    sort(sortedArr + 1, sortedArr + sortedIndex);

    for (int i = 1; i < sortedIndex; i++) {
        cout << sortedArr[i] << "\n";
    }

    return 0;
}





