#include<iostream>
using namespace std;
int N;
int color[1001][3];
int cache[1001][3];
int answer = 0x3f3f3f;

void input() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int r, g, b;
		cin >> r >> g >> b;
		color[i][0] = r;
		color[i][1] = g;
		color[i][2] = b;
	}
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 3; j++) {
			cache[i][j] = 0x3f3f3f;
		}
	}
}
void solve() {
	cache[1][0] = color[1][0];
	cache[1][1] = color[1][1];
	cache[1][2] = color[1][2];
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 2; j++) {
			for (int k = 0; k <= 2; k++) {
				if (j == k)continue;
				cache[i][j] = min(cache[i][j], color[i][j] + cache[i - 1][k]);
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		answer = min(answer, cache[N][i]);
	}
}

int main() {
	input();
	solve();
	cout << answer;
}