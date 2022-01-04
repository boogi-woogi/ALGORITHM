#include<iostream>
#include<cstring>
using namespace std;
long cache[101][21];
int num[101];
int N;
int answer = 0;
void init() {
	memset(cache, 0, sizeof(cache));
}
void input() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> num[i];
	}
}
bool isin(int num) {
	if (num >= 0 && num <= 20) return true;
	return false;
}
void solve() {
	cache[1][num[1]] = 1;
	for (int i = 2; i < N; i++) {
		for (int j = 0; j <= 20; j++) {
			if (cache[i - 1][j]) {
				if (isin(num[i] + j)) cache[i][num[i] + j] += cache[i - 1][j];
				if (isin(j-num[i])) cache[i][j-num[i]] += cache[i - 1][j];
			}
		}
	}
}
int main() {
	init();
	input();
	solve();
	cout << cache[N - 1][num[N]] << endl;
}