//#include<iostream>
//#include<vector>
//#include<queue>
//#include<cstring>
//using namespace std;
//char map[12][6];
//int ym[4] = { -1, 1, 0, 0 };
//int xm[4] = { 0, 0, -1, 1 };
//int answer = 0;
//bool visited[12][6] = { false, };
//vector <pair<int, int>> temp;
//void show() {
//	for (int i = 0; i < 12; i++) {
//		for (int j = 0; j < 6; j++) {
//			cout << map[i][j];
//		}
//		cout << endl;
//	}
//}
//void DFS(int y, int x) {
//	for (int i = 0; i < 4; i++) {
//		int ny = y + ym[i];
//		int nx = x + xm[i];
//		if (ny < 0 || ny>11 || nx < 0 || nx > 5)continue;
//		if (visited[ny][nx] == true)continue;
//		if (map[ny][nx] != map[y][x])continue;
//		visited[ny][nx] = true;
//		temp.push_back(make_pair(ny, nx));
//		DFS(ny, nx);
//	}
//}
//bool ERASE() {
//	if (temp.size() >= 4) {
//		for (int i = 0; i < temp.size(); i++) {
//			int erasey = temp[i].first;
//			int erasex = temp[i].second;
//			map[erasey][erasex] = '.';
//		}
//		temp.clear();
//		return true;
//	}
//	else {
//		temp.clear();
//		return false;
//	}
//}
//void DOWN() {
//	queue<char> q;
//	for (int x = 0; x < 6; x++) {
//		for (int y = 11; y >= 0; y--) {
//			if (map[y][x] != '.') {
//				q.push(map[y][x]);
//				map[y][x] = '.';
//			}
//		}
//		int many = q.size();
//		for (int i = 0; i < many; i++) {
//			map[11 - i][x] = q.front();
//			q.pop();
//		}
//	}
//}
//void solve() {
//	bool flag = false;
//	do {
//		if (flag == true) {
//			DOWN();
//			/*show();*/
//			answer++;
//			memset(visited, false, sizeof(visited));
//		}
//		flag = false;
//		for (int i = 0; i < 12; i++) {
//			for (int j = 0; j < 6; j++) {
//				if (map[i][j] != '.') {
//					temp.push_back(make_pair(i, j));
//					visited[i][j] = true;
//					DFS(i, j);
//					if (ERASE()) {
//						flag = true;
//					}
//				}		
//			}
//		}
//	} while (flag);
//	cout << answer;
//}
//int main() {
//	for (int i = 0; i < 12; i++) {
//		for (int j = 0; j < 6; j++) {
//			cin >> map[i][j];
//		}
//	}
//	solve();
//}