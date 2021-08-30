//#include<iostream>
//#include<vector>
//#include<queue>
//#include<math.h>
//using namespace std;
//int N, M;
//char map[101][101];
//bool visited[101][101];
//int rw, rb;
//int temp_cnt = 1;
//int ym[4] = { -1, 1, 0, 0 };
//int xm[4] = { 0 ,0, -1, 1 };
//void DFS(int y, int x, int cnt, char cur) {
//	for (int i = 0; i < 4; i++) {
//		int ny = y + ym[i];
//		int nx = x + xm[i];
//		if (ny<1 || ny>N || nx<1 || nx>M) continue;
//		if (visited[ny][nx]) continue;
//		if (map[ny][nx] != cur)continue;
//		visited[ny][nx] = true;
//		temp_cnt++;
//		DFS(ny, nx, cnt+1, cur);
//	}
//}
//int main() {
//	cin >> M >> N;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> map[i][j];
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (visited[i][j] == false) {
//				visited[i][j] = true;
//				DFS(i, j, 1, map[i][j]);
//				if (map[i][j] == 'B') {
//					rb += pow(temp_cnt, 2);
//					temp_cnt = 1;
//				}
//				else {
//					rw += pow(temp_cnt, 2);
//					temp_cnt = 1;
//				}
//			}
//		}
//	}
//	cout << rw << '\n' << rb;
//}