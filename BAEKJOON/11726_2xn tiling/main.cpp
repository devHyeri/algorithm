#include <iostream>
using namespace std;

int d[10001];

int dp(int x) {
	if (x == 1) return 1;
	else if (x == 2) return 2;
	else if (d[x] != 0)return d[x];
	return d[x] = (dp(x - 1) + dp(x - 2)) % 10007;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", dp(n));

	return 0;
}