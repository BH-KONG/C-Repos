/*
* ������ �ٸ����·� ����ϱ� (���۴��� ū ��� ����)
*/
#include <iostream>
using namespace std;

int main() {
	int first, last;

	// ���۴�, ���� �Է�.
	cout << "���۴ܰ� ������ �Է����ּ���.\n���۴�: ";
	cin >> first;
	cout << "����: ";
	cin >> last;

	// ���۴� <= ���� (���۴ܰ� ������ ������� ���ٸ���µǹǷ�)
	if (first <= last) {
		// ù��° ��� �ݺ���
		for (int i = 1; i <= 9; i++) {
			for (int j = first; j <= last; j++) {
				cout << j << " x " << i << " = " << j * i << '\t';
			}
			cout << '\n';
		}

		cout << '\n';

		//�ι�° ��� �ݺ���
		for (int i = first; i <= last; i++) {
			for (int j = 1; j <= 9; j++) {
				cout << i << " x " << j << " = " << i * j << '\t';
			}
			cout << '\n';
		}
	}
	else {
		// ù��° ��� �ݺ���
		for (int i = 1; i <= 9; i++) {
			for (int j = first; j >= last; j--) {
				cout << j << " x " << i << " = " << j * i << '\t';
			}
			cout << '\n';
		}
		cout << "\n";
		// �ι�° ��� �ݺ���
		for (int i = first; i >= last; i--) {
			for (int j = 1; j <= 9; j++) {
				cout << i << " x " << j << " = " << i * j << '\t';
			}
			cout << '\n';
		}
	}

	return 0;
}