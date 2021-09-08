#include<iostream>
#include<queue>
using namespace std;
int N;
char map[51][51];
int cache[51][51];
const int INF = 0x3f3f3f;
queue<pair<int, int>> q;
int ym[4] = { -1, 1, 0, 0 };
int xm[4] = { 0, 0, -1, 1 };

void input() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cache[i][j] = INF;
		}
	}
	q.push(make_pair(1, 1));
	if (map[1][1] == '0') {
		cache[1][1] = 1;
	}
	else {
		cache[1][1] = 0;
	}
}

void solve() {
	while (!q.empty()) {
		int cury = q.front().first;
		int curx = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nexty = cury + ym[i];
			int nextx = curx + xm[i];
			if (nexty<1 || nexty>N || nextx<1 || nextx>N) continue;
			if (map[nexty][nextx] == '0') {
				if (cache[cury][curx] + 1 < cache[nexty][nextx]) {
					cache[nexty][nextx] = cache[cury][curx] + 1;
					q.push(make_pair(nexty, nextx));
				}
			}
			else {
				if (cache[cury][curx] < cache[nexty][nextx]) {
					cache[nexty][nextx] = cache[cury][curx];
					q.push(make_pair(nexty, nextx));
				}
			}
		}
	}
	cout << cache[N][N];
}
int main() {
	input();
	solve();

}