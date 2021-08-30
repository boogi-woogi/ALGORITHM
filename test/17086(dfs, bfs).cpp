//#include<iostream>
//#include<queue>
//#include<vector>
//#include<algorithm>
//#include<math.h>
//#include<string.h>
//using namespace std;
//int N, M;
//int map[50][50];
//int dt[50][50] = { 0, };
//bool visit[50][50];
//vector<pair<int, int>> v;
//int ym[8] = { -1, 1, 0, 0, -1, -1, 1, 1 };
//int xm[8] = { 0, 0, -1, 1, -1, 1, -1, 1 };
//int bfs(int y, int x) {
//	queue<pair<pair<int, int>, int>> q;
//	q.push(make_pair(make_pair(y, x), 0));
//	while (!q.empty()) {
//		int cy = q.front().first.first;
//		int cx = q.front().first.second;
//		int cnt = q.front().second;
//		q.pop();
//		if (map[cy][cx]) return cnt;
//		for (int i = 0; i < 8; i++) {
//			int ny = cy + ym[i];
//			int nx = cx + xm[i];
//			if (ny < 0 || ny >= N || nx < 0 || nx >= M) continue;
//			if (visit[ny][nx] == true) continue;
//			q.push(make_pair(make_pair(ny, nx), cnt + 1));
//			visit[ny][nx] = true;
//
//		}
//
//	}
//}
//
//
//void beforebfs() {
//	for (int i = 0; i < v.size(); i++) {
//		memset(visit, false, sizeof(visit));
//		int cy = v[i].first;
//		int cx = v[i].second;
//		dt[cy][cx]=bfs(cy, cx);
//	}
//}
//
//int main() {
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == 0) {
//				v.push_back(make_pair(i, j));
//			}
//		}
//	}
//	beforebfs();
//	int answer = dt[0][0];
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			answer = max(answer, dt[i][j]);
//		/*	cout << dt[i][j]<<' ';*/
//		}
//	/*	cout << endl;*/
//	}
//	cout << answer;
//}
