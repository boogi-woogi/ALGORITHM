//#include<iostream>
//#include<vector>
//#include<cstring>
//#include<queue>
//#include<algorithm>
//using namespace std;
//int N, M;
//char map[1001][1001];
//bool visit[1001][1001][2] = { 0, };
//int ym[4] = { -1, 1, 0, 0 };
//int xm[4] = { 0, 0, -1, 1 };
//queue<pair<pair<int, int>, pair<int, bool>>> q;
//int bfs() {
//	visit[1][1][1] = true;
//	q.push(make_pair(make_pair(1, 1), make_pair(1, true)));
//	while (!q.empty()) {
//		int cy = q.front().first.first;
//		int cx = q.front().first.second;
//		int cnt = q.front().second.first;
//		bool chance = q.front().second.second;
//		q.pop();
//		if (cy == N && cx == M) {
//			return cnt;
//		}
//		for (int i = 0; i < 4; i++) {
//			int ny = cy + ym[i];
//			int nx = cx + xm[i];
//			if (ny >= 1 && ny <= N && nx >= 1 && nx <= M) {
//				if (map[ny][nx] == '1' && visit[ny][nx][!chance]==false && chance) {
//					q.push(make_pair(make_pair(ny, nx), make_pair(cnt + 1, !chance)));
//					visit[ny][nx][!chance] = true;
//				}
//				if (map[ny][nx] == '0' && visit[ny][nx][chance] == false) {
//					q.push(make_pair(make_pair(ny, nx), make_pair(cnt + 1, chance)));
//					visit[ny][nx][chance] = true;
//				}
//			}
//		}
//			
//	}
//	return -1;
//}
//int main() {
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> map[i][j];
//		}
//	}
//	cout << bfs();
//
//}