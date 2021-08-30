//#include<iostream>
//#include<vector>
//#include<cstring>
//#include<queue>
//#include<algorithm>
//using namespace std;
//int N, M, dir;
//int map[51][51];
//pair<int, int> n[4] = { {0, -1}, {1, 0}, {0, 1}, {-1, 0} };
//pair<int, int> w[4] = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };
//pair<int, int> s[4] = { {0, 1}, {-1, 0}, {0, -1}, {1, 0} };
//pair<int, int> e[4] = { {-1, 0}, {0, -1}, {1, 0}, {0, 1} };
//pair<int, int> m[4] = { {0, -1}, {-1, 0}, {0, 1}, {1, 0} };
//pair<int, int> bmove[4] = { {1, 0}, {0, -1}, {-1, 0}, {0, 1} };
//int answer = 1;
//queue<pair<pair<int, int>, int>> q;
//bool isin(int y, int x) {
//	if (y < 0 || y >= N || x < 0 || x >= M)
//		return false;
//	else
//		return true;
//}
//void show_map() {
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cout << map[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//int turndir(int dir) {
//	if (dir == 0) {
//		return 3;
//	}
//	else if (dir == 1) {
//		return 0;
//	}
//	else if (dir == 2) {
//		return 1;
//	}
//	else if (dir == 3) {
//		return 2;
//	}
//}
//void bfs() {
//
//	while (!q.empty()) {
//		bool flag = false;
//		int cy = q.front().first.first;
//		int cx = q.front().first.second;
//		int dir = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int ny = cy + m[dir].first;
//			int nx = cx + m[dir].second;
//			int ndir = turndir(dir);
//			if (map[ny][nx] == 0) {
//				flag = true;
//				q.push(make_pair(make_pair(ny, nx), ndir));
//				map[ny][nx] = 1;
//				answer++;
//				break;
//			}
//			else {
//				dir = ndir;
//			}
//		}
//		if (!flag) {
//			int ny = cy + bmove[dir].first;
//			int nx = cx + bmove[dir].second;
//			if ((isin(ny, nx) == false) || map[ny][nx] == 2) {
//				cout << answer << endl;
//				return;
//			}
//			else {
//				q.push(make_pair(make_pair(ny, nx), dir));
//			}
//		}
//	}
//}
//
//int main() {
//	int sy, sx, sdir;
//	cin >> N >> M >> sy >> sx >> sdir;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == 1) map[i][j] = 2;
//		}
//	}
//	q.push(make_pair(make_pair(sy, sx), sdir));
//	map[sy][sx] = 1;
//	bfs();
//}