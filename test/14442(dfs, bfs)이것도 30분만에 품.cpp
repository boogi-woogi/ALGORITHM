//#include<iostream>
//#include<queue>
//using namespace std;
//
//struct pt {
//	int y;
//	int x;
//	int chance;
//	int cnt;
//};
//int answer = 0;
//int ym[4] = { -1, 1, 0, 0 };
//int xm[4] = { 0, 0, -1, 1 };
//int N, M, K;
//char map[1001][1001];
//bool visited[1001][1001][11];
//queue<pt> q;
//
//bool isin(int y, int x) {
//	if (y > N || y<1 || x>M || x < 1) {
//		return false;
//	}
//	return true;
//}
//
//void input() {
//	cin >> N >> M >> K;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> map[i][j];
//		}
//	}
//	q.push({ 1, 1, K, 1 });
//	visited[1][1][K] = true;
//}
//
//void BFS() {
//	while (!q.empty()) {
//		int cy = q.front().y;
//		int cx = q.front().x;
//		int chance = q.front().chance;
//		int cnt = q.front().cnt;
//		q.pop();
//
//		if (N == cy && M == cx) {
//			answer = cnt;
//			return;
//		}
//
//
//		for (int i = 0; i < 4; i++) {
//			int ny = cy + ym[i];
//			int nx = cx + xm[i];
//			if (!isin(ny, nx)) continue;
//			if (chance == 0 && map[ny][nx] == '1') continue;
//			if (map[ny][nx] == '1') {
//				if (visited[ny][nx][chance - 1]) continue;
//				else {
//					visited[ny][nx][chance - 1] = true;
//					q.push({ ny, nx, chance - 1 , cnt+1});
//				}
//			}
//			else {
//				if (visited[ny][nx][chance]) continue;
//				else {
//					visited[ny][nx][chance] = true;
//					q.push({ ny, nx, chance , cnt+1});
//				}
//			}
//		}
//	}
//	answer = -1;
//	return;
//}
//
//int main() {
//	input();
//	BFS();
//	cout << answer;
//}