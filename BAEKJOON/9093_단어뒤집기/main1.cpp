#include <iostream>
#include <string>
using namespace std;
int main() {
	int testcase;
	scanf_s("%d", &testcase);
	cin.ignore();	//�����ָ� �� ó���� scanf���� �Է��ߴ� ������ ���Ͱ� original�� ��

	for (int i = 0; i < testcase; i++) {
		int start = 0, end = -1;
		string original, str = "";
		getline(cin, original);

		while (end != original.length()) {
			start = end + 1;
			end = original.find(" ", start);
			if (end == string::npos) end = original.length();

			for (int j = end - 1; j >= start; j--) {
				str += original[j];
			}
			str += " ";
		}
		cout << str << '\n';
	}
	return 0;
}