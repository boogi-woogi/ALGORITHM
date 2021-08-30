//#include<iostream>
//using namespace std;
//int N, M;
//int map[10001][10001];
//bool visited[10001][10001] = { false, };
//int cache[10001][10001];
//int ym[4] = { -1, 1, 0, 0 };
//int xm[4] = { 0, 0, -1, 1 };
//void input() {
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> map[i][j];
//		}
//	}
//}
//int solve(int y, int x) {
//	int cscore = map[y][x];
//	if (cache[y][x] != 0) return cache[y][x];
//	if (y == N && x == M) return 1;
//	for (int i = 0; i < 4; i++) {
//		int ny = y + ym[i];
//		int nx = x + xm[i];
//		int nscore = map[ny][nx];
//		if (ny<1 || ny>N || nx<1 || nx>M)continue;
//		if (visited[ny][nx])continue;
//		if (nscore > cscore)continue;
//		visited[y][x] = true;
//		cache[y][x] += solve(ny, nx);
//	}
//	return cache[y][x];
//}
//int main() {
//	input();
//
//	solve(1, 1);
//	visited[1][1] = true;
//	cout << cache[1][1];
//}