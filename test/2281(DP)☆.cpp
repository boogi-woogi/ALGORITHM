#include<iostream>
#include<cstring>
using namespace std;
int N, M;
int name[1001];
int cache[1001][1001];
void input() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> name[i];
	}
}

int dp(int index, int len) {
	if (index >= N) return 0;
	if (cache[index][len] != -1) return cache[index][len];

	cache[index][len] = (M - len + 1) * (M - len + 1) + dp(index + 1, name[index] + 1);
	if (len + name[index] <= M)
		cache[index][len] = min(cache[index][len], dp(index + 1, len + name[index] + 1));
	return cache[index][len];
}
int main() {
	input();
	memset(cache, -1, sizeof(cache));
	cout << dp(0, 0);
	return 0;
}