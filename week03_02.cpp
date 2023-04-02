/*
* 구구단 다른형태로 출력하기 (시작단이 큰 경우 포함)
*/
#include <iostream>
using namespace std;

int main() {
	int first, last;

	// 시작단, 끝단 입력.
	cout << "시작단과 끝단을 입력해주세요.\n시작단: ";
	cin >> first;
	cout << "끝단: ";
	cin >> last;

	// 시작단 <= 끝단 (시작단과 끝단이 같은경우 한줄만출력되므로)
	if (first <= last) {
		// 첫번째 출력 반복문
		for (int i = 1; i <= 9; i++) {
			for (int j = first; j <= last; j++) {
				cout << j << " x " << i << " = " << j * i << '\t';
			}
			cout << '\n';
		}

		cout << '\n';

		//두번째 출력 반복문
		for (int i = first; i <= last; i++) {
			for (int j = 1; j <= 9; j++) {
				cout << i << " x " << j << " = " << i * j << '\t';
			}
			cout << '\n';
		}
	}
	else {
		// 첫번째 출력 반복문
		for (int i = 1; i <= 9; i++) {
			for (int j = first; j >= last; j--) {
				cout << j << " x " << i << " = " << j * i << '\t';
			}
			cout << '\n';
		}
		cout << "\n";
		// 두번째 출력 반복문
		for (int i = first; i >= last; i--) {
			for (int j = 1; j <= 9; j++) {
				cout << i << " x " << j << " = " << i * j << '\t';
			}
			cout << '\n';
		}
	}

	return 0;
}