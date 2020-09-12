#include <iostream>
#include <algorithm>	//sort()
#include <vector>
using namespace std;


// sort�Լ��� ������ ������ ���� ���� �� �ִ� (default: ��������)

bool compare(int a, int b) {
	return a > b;	//a>b �� �� �켱������ ���� (��������)
}

bool compare2(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b) {
	if (a.second.first == b.second.first)	//������ ������
		return a.second.second > b.second.second;
	else
		return a.second.first > b.second.first;
}

int main() {
	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
	sort(a, a + 10, compare);
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n\n");


	vector<pair<int, string>> v;	//�ܼ��ϰ� ������ �����ϸ� �� �� int���� ���� ����
	v.push_back(pair<int, string>(90, "Jane"));
	v.push_back(pair<int, string>(93, "Jully"));
	v.push_back(pair<int, string>(80, "Poll"));
	v.push_back(pair<int, string>(72, "Amy"));
	v.push_back(pair<int, string>(85, "Robert"));

	sort(v.begin(), v.end());
	for (unsigned int i = 0; i < v.size(); i++)
		cout << v[i].second << ' ';	//pair���� first, second ��� ��
	printf("\n\n");



	// ������ ���� ������ �����ϰ�, ������ ���� ��� ���̰� �� � ����� ���� ��µǵ��� �մϴ�.
	// ���ı��� 2�� - ���� pair ���
	vector<pair<string, pair<int, int>>> vec;
	vec.push_back(pair<string, pair<int, int>>("Jane", make_pair(90, 19961222)));
	vec.push_back(pair<string, pair<int, int>>("Jully", make_pair(95, 19930518)));
	vec.push_back(pair<string, pair<int, int>>("Poll", make_pair(90, 19950203)));
	vec.push_back(pair<string, pair<int, int>>("Amy", make_pair(95, 19931018)));
	vec.push_back(pair<string, pair<int, int>>("Robert", make_pair(88, 19990505)));

	sort(vec.begin(), vec.end(), compare2);
	for (unsigned int i = 0; i < vec.size(); i++)
		cout << vec[i].first << ' ';


	//���ı����� 3�� �̻��� ��쿡�� pair�� ����ϴ°� ������ �� �־ class ���°� ���� ����

	return 0;
}