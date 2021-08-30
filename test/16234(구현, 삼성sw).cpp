//#include<iostream>
//#include<vector>
//#include<math.h>
//#include<cstring>
//using namespace std;
//int N, mini, maxi;
//bool flag = false;
//bool flag2 = false;
//int map[51][51] = { 0, };
//bool visited[51][51] = { false, };
//bool connect[51][51][51][51] = { false, };
//vector<pair<int, int>> v;
//int ym[4] = { -1, 1, 0, 0 };
//int xm[4] = { 0, 0, -1, 1 };
//int answer = 0;
//void show() {
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cout << map[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//void input() {
//	cin >> N >> mini >> maxi;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> map[i][j];
//		}
//	}
//}
//void DFS(int y, int x) {
//	int c_value = map[y][x];
//	for (int i = 0; i < 4; i++) {
//		int ny = y + ym[i];
//		int nx = x + xm[i];
//
//		if (ny<1 || ny>N || nx<1 || nx>N) {
//			continue;
//		}
//
//		int dif = abs(c_value - map[ny][nx]);
//
//		if (visited[ny][nx]) continue;
//		if (dif<mini || dif>maxi) continue;
//		v.push_back(make_pair(ny, nx));
//		visited[ny][nx] = true;
//		flag2 = true;
//		flag = true;
//		DFS(ny, nx);
//	}
//}
//void solve() {
//	do {
//		if (flag2) {
//			answer++;
//			flag2 = false;
//		}
//		memset(visited, false, sizeof(visited));
//
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				if (!visited[i][j]) {
//
//					visited[i][j] = true;
//					DFS(i, j);
//
//					if (flag) {
//						int avg = map[i][j];
//						for (int k = 0; k < v.size(); k++) {
//							avg += map[v[k].first][v[k].second];
//						}
//						avg /= v.size() + 1;
//						map[i][j] = avg;
//						for (int k = 0; k < v.size(); k++) {
//							map[v[k].first][v[k].second] = avg;
//						}
//						flag = false;
//
//						v.clear();
//					}
//				}
//			}
//		}
//		/*show();*/
//	} while (flag2);
//
//	cout << answer;
//}
//
//
//int main() {
//	input();
//	solve();
//
//}