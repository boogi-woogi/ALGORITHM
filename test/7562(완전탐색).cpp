//#include<iostream>
//#include<queue>
//#include<cstring>
//using namespace std;
//struct night {
//	int cy;
//	int cx;
//	int cnt;
//};
//int T, L;
//int py, px;
//int visited[301][301];
//queue<night> q;
//int ym[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };
//int xm[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
//int BFS() {
//	while (!q.empty()) {
//		int cy = q.front().cy;
//		int cx = q.front().cx;
//		int cnt = q.front().cnt;
//		q.pop();
//		if (py == cy && px == cx) {
//			return cnt;
//		}
//		for (int i = 0; i < 8; i++) {
//			int ny = cy + ym[i];
//			int nx = cx + xm[i];
//			if (ny<0 || ny>=L || nx<0 || nx>=L) continue;
//			if (visited[ny][nx]) continue;
//			visited[ny][nx] = true;
//			q.push({ ny, nx, cnt + 1 });
//		}
//	}
//}
//
//void input() {
//	cin >> T;
//	
//	for (int i = 0; i < T; i++) {
//		while(!q.empty()){
//			q.pop();
//		}
//		memset(visited, false, sizeof(visited));
//		int sy, sx;
//		cin >> L;
//		cin >> sy >> sx >> py >> px;
//		visited[sy][sx] = true;
//		q.push({ sy, sx, 0 });
//		cout<<BFS()<<endl;
//	}
//}
//
//int main() {
//	input();
//}