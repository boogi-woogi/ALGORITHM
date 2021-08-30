//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//char map[5][5];
//
//vector<int> s;
//int answer = 0;
//bool isSelected[25] = { false, };
//
//int ym[4] = { -1, 1, 0, 0 };
//int xm[4] = { 0, 0, -1, 1 };
//
//struct pt {
//	int y;
//	int x;
//};
//
//bool isin(int y, int x) {
//	if (y < 0 || y > 4 || x < 0 || x > 4) {
//		return false;
//	}
//	return true;
//}
//
//void input() {
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cin >> map[i][j];
//		}
//	}
//}
//
//bool check() {
//	int temp = 0;
//	for (int i = 0; i < 25; i++) {
//		if (isSelected[i]) {
//			if (map[i / 5][i % 5] == 'S') {
//				temp++;
//			}
//		}
//	}
//	if (temp >= 4) return true;
//	else return false;
//}
//bool near() {
//	queue <pair<int, int>> q;
//	bool visited[5][5] = { false, };
//	int temp[5][5] = { 0, };
//	bool save = false;
//
//	for (int i = 0; i < 25; i++) {
//		if (isSelected[i]) {
//			temp[i / 5][i % 5] = 1;
//			if (save == false) {
//				q.push({ i / 5, i % 5 });
//				visited[i / 5][i % 5] = true;
//				save = true;
//			}
//		}
//	}
//
//	int cnt = 1;
//	while (!q.empty()) {
//		int sy = q.front().first;
//		int sx = q.front().second;
//		
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int ny = sy + ym[i];
//			int nx = sx + xm[i];
//
//			if (!isin(ny, nx)) continue;
//			if (visited[ny][nx]||!temp[ny][nx]) continue;
//			visited[ny][nx] = true;
//			cnt++;
//			q.push(make_pair(ny, nx ));
//		}
//	}
//
//	if (cnt == 7) return true;
//	else {
//		return false;
//	}
//}
//
//void DFS(int index, int cnt) {
//	if (cnt == 7) {
//		if (check()) {
//			if (near()) {
//				answer++;
//			}
//		}
//		return;
//	}
//	for (int i = index; i < 25; i++) {
//		if (isSelected[i]) continue;
//		isSelected[i] = true;
//		DFS(i, cnt + 1);
//		isSelected[i] = false;
//
//	}
//}
//void solve(){
//		DFS(0, 0);
//}
//
//int main() {
//	input();
//	solve();
//	cout << answer;
//}