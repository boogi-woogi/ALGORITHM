//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <cstring> //memset
//using namespace std;
//const int MAX = 100;
//int ym[4] = { -1, 0, 1, 0 };
//int xm[4] = { 0, 1, 0, -1 };
//int visited[MAX][MAX] = { false, };
//int map[MAX][MAX];
//int sizeN;
//int result = 999999;
//struct point {
//	int y, x;
//};
//bool isin(int y2, int x2) {
//	if (y2 >= 0 && x2 >= 0 && y2 < sizeN && x2 < sizeN) {
//		return true;
//	}
//	return false;
//}
//void dfs(int yp, int xp, int cnt) {
//	if (visited[yp][xp] == true) return;
//	visited[yp][xp] = true;
//	for (int i = 0; i < 4; i++) {
//		int y2 = yp + ym[i];
//		int x2 = xp + xm[i];
//		if (isin(y2, x2) == true && map[y2][x2]==1) {
//			map[y2][x2] = cnt;
//			dfs(y2, x2, cnt);
//		}
//	}
//}
//int bfs(int cnt) {
//	queue<point> q;
//	for (int i = 0; i < sizeN; i++) {
//		for (int j = 0; j < sizeN; j++) {
//			if (map[i][j] == cnt) {
//				visited[i][j] = true;
//				q.push({ i, j });
//			}
//		}
//	}
//	int result = 999999;
//	while (!q.empty()) {
//		int limit = q.size();
//		for (int i = 0; i < limit; i++) {
//			int y = q.front().y;
//			int x = q.front().x;
//			q.pop();
//			for (int i = 0; i < 4; i++) {
//				int nexty = y + ym[i];
//				int nextx = x + xm[i];
//				if (isin(nexty, nextx) == true) {
//					if (map[nexty][nextx] == 0 && visited[nexty][nextx] == false) {
//						return result;
//					}
//					else if (map[nexty][nextx] == 0 && visited[nexty][nextx] == false) {
//						visited[nexty][nextx] = true;
//						q.push({ nexty, nextx });
//					}
//				}
//			}
//		}
//		result++;
//	}
//}
//int main(){
//	
//	cin >> sizeN;
//	for (int i = 0; i < sizeN; i++) {
//		for (int j = 0; j < sizeN; j++) {
//			cin >> map[i][j];
//		}
//	}
//	int cnt = 1;
//	for (int i = 0; i < sizeN; i++) {
//		for (int j = 0; j < sizeN; j++) {
//			if (visited[i][j] == false&&map[i][j]==1) {
//				dfs(i, j, cnt);
//				cnt++;
//			}
//		}
//	}
//	
//	//for (int i = 0; i < sizeN; i++) {
//	//	for (int j = 0; j < sizeN; j++) {
//	//		cout << map[i][j] << ' ';
//	//	}
//	//	cout << endl;
//	//}
//	for (int i = 1; i < cnt; i++) {
//		memset(visited, false, sizeof(visited));
//		result = min(result, bfs(i));
//	}
//		
//	cout << result;
//}