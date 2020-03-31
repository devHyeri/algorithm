#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int number, temp = 1;	//temp: stack�� push�ؾ��ϴ� ���ڼ���
	stack<int> stck;
	vector<char> pushORpop;		//push, pop���� ����ϴ� ����
	scanf_s("%d", &number);
	int* ary = new int[number];

	for (int i = 0; i < number; i++)	//���ϴ� ���� �Է�
		scanf_s("%d", &ary[i]);

	for (int i = 0; i < number; i++) {
		while (temp <= ary[i]) {
			stck.push(temp);
			pushORpop.push_back('+');
			temp++;
		}

		if (!stck.empty()) {
			if (stck.top() == ary[i]) {
				stck.pop();
				pushORpop.push_back('-');
			}
		}
	}
	//���
	if (stck.empty()) {
		for (int i = 0; i < pushORpop.size(); i++)
			printf("%c ", pushORpop.at(i));
	}
	else
		printf("NO");
	printf("\n");

	delete[] ary;
	return 0;
}