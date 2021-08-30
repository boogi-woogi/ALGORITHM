//#include<iostream>
//#include<queue>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//int map[21][21];
//int N;
//int answer = 0;
//int INF = 0x3f3f3f;
//int ym[4] = { -1, 1, 0, 0 };
//int xm[4] = { 0, 0, -1, 1 };
//bool visited[21][21] = { false, };
//struct shark {
//	int y;
//	int x;
//	int howeat;
//	int cm;
//	int cnt;
//};
//struct fish {
//	int y;
//	int x;
//	int dt;
//};
//queue<shark> q;
//
//shark cur;
//bool cmp(fish f1, fish f2) {
//	if (f1.dt < f2.dt) {
//		return true;
//	}
//	else if (f1.dt == f2.dt) {
//		if (f1.y < f2.y) {
//			return true;
//		}
//		else if (f1.y == f2.y) {
//			if (f1.x < f2.x) {
//				return true;
//			}
//			else {
//				return false;
//			}
//		}
//		return false;
//	}
//	return false;
//
//}
//void input() {
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == 9) {
//				visited[i][j] = true;
//				q.push({ i, j, 0, 2, 0 });
//				cur = { i, j, 0, 2, 0 };
//
//			}
//		}
//	}
//}
//fish BFS() {
//	vector<fish> v;
//	int trigger = INF;
//	while (!q.empty()) {
//		int cy = q.front().y;
//		int cx = q.front().x;
//		int ceat = q.front().howeat;
//		int csize = q.front().cm;
//		int cnt = q.front().cnt;
//		if (cnt>trigger) {
//			break;
//		}
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int ny = cy + ym[i];
//			int nx = cx + xm[i];
//			if (ny<1 || ny>N || nx<1 || nx>N)continue;
//			if (visited[ny][nx])continue;
//			if (map[ny][nx] > csize)continue;
//			if (map[ny][nx] < csize && map[ny][nx] != 0) {
//				visited[ny][nx] = true;
//				v.push_back({ ny, nx, cnt + 1 });
//				q.push({ ny, nx, ceat, csize, cnt + 1 });
//				trigger = cnt;
//			}
//			else if (map[ny][nx] == 0 || map[ny][nx] == csize) {
//				visited[ny][nx] = true;
//				q.push({ ny, nx, ceat, csize, cnt + 1 });
//			}
//		}
//
//	}
//	while (!q.empty()) {
//		q.pop();
//	}
//	if (v.empty()) {
//		return fish{ INF, INF, INF };
//	}
//	else {
//		sort(v.begin(), v.end(), cmp);
//		fish result = v[0];
//		v.clear();
//		memset(visited, false, sizeof(visited));
//		return result;
//	}
//
//}
//void show() {
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cout << map[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//int solve() {
//	input();
//	while (true) {
//		fish food = BFS();
//		if (food.dt == INF) return answer;
//		answer += food.dt;
//		map[cur.y][cur.x] = 0;
//		map[food.y][food.x] = 9;
//
//
//		cur = { food.y, food.x, cur.howeat + 1, cur.cm, 0 };
//		if (cur.howeat == cur.cm) {
//			cur = { food.y, food.x, 0, cur.cm + 1, 0 };
//		}
//		/*show();
//		cout << answer << " 상어 크기 : " << cur.cm << endl;*/
//		visited[cur.y][cur.x] = true;
//		q.push({ cur.y, cur.x, cur.howeat, cur.cm,  0 });
//	}
//}
//int main() {
//	cout << solve();
//}
////ERROR:
////애초에 지나가지 못하는 경로일 수가 있다.
////이래서 한 칸 한 칸 이동해야 하는 듯 하다.