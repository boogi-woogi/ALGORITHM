//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <cmath>
//#include <queue>
//#include <cstring>
//#include <string>
//#include <deque>
//#include <tuple>
//#include <set>
//using namespace std;
////const int INF = 0x3f3f3f3f;
//int ym[4] = { -1, 1, 0, 0 };
//int xm[4] = { 0, 0, -1, 1 };
//bool visited[501][501] = { false, };
//int map[501][501], N, M;
//int answer = 0;
//void othershape(int y, int x) {
//	if (y + 2 <= N) {
//		if (x + 1 <= M)
//			answer = max(answer, map[y][x] + map[y + 1][x] + map[y + 1][x + 1] + map[y + 2][x]);
//		if (1 <= x - 1)
//			answer = max(answer, map[y][x] + map[y + 1][x] + map[y + 1][x - 1] + map[y + 2][x]);
//	}
//
//	if (x + 2 <= M) {
//		if (1 <= y - 1)
//			answer = max(answer, map[y][x] + map[y][x + 1] + map[y - 1][x + 1] + map[y][x + 2]);
//		if (y + 1 <= N)
//			answer = max(answer, map[y][x] + map[y][x + 1] + map[y + 1][x + 1] + map[y][x + 2]);
//	}
//
//
//}
//void solve(int cy, int cx, int cscore, int cnt) {
//	if (cnt == 3) {
//		answer = max(answer, cscore);
//		return;
//	}
//	for (int i = 0; i < 4; i++) {
//		int ny = cy + ym[i]; int nx = cx + xm[i];
//		if (ny > N || ny<1 || nx>M || nx < 1)continue;
//		if (visited[ny][nx]) continue;
//		visited[ny][nx] = true;
//		solve(ny, nx, cscore + map[ny][nx], cnt + 1);
//		visited[ny][nx] = false;
//	}
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> map[i][j];
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			othershape(i, j);
//
//			visited[i][j] = true;
//			solve(i, j, map[i][j], 0);
//			visited[i][j] = false;
//		}
//	}
//	cout << answer;
//
//}