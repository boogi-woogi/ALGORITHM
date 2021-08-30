//#include<iostream>
//#include<queue>
//#include<vector>
//#include<cstring>
//using namespace std;
//int N, M, map[101][101], endy, endx, enddir;
//typedef struct {
//	int y, x;
//}dir;
//dir moveDir[5] = { {0, 0}, {0,1}, {0,-1}, {1,0}, {-1, 0} };
//int answer = 999999999;
//queue<pair<pair<int, int>, pair<int, int>>> q;
//bool visited[101][101][5];
//int tleft(int dir) {
//	if (dir == 1) {
//		return 4;
//	}
//	else if (dir == 4) {
//		return 2;
//	}
//	else if (dir == 2) {
//		return 3;
//	}
//	else if (dir == 3) {
//		return 1;
//	}
//}
//int tright(int dir) {
//	if (dir == 1) {
//		return 3;
//	}
//	else if (dir == 3) {
//		return 2;
//	}
//	else if (dir == 2) {
//		return 4;
//	}
//	else if (dir == 4) {
//		return 1;
//	}
//}
//pair<int, int> move1(pair<int, int> cp, int dir) {
//	int ny, nx;
//	if (dir == 1) {
//		ny = cp.first;
//		nx = cp.second + 1;
//		return make_pair(ny, nx);
//	}
//	else if (dir == 2) {
//		ny = cp.first;
//		nx = cp.second - 1;
//		return make_pair(ny, nx);
//	}
//	else if (dir == 3) {
//		ny = cp.first + 1;
//		nx = cp.second;
//		return make_pair(ny, nx);
//	}
//	else if (dir == 4) {
//		ny = cp.first - 1;
//		nx = cp.second;
//		return make_pair(ny, nx);
//	}
//}
//int solve() {
//	while (!q.empty()) {
//		int cy = q.front().first.first;
//		int cx = q.front().first.second;
//		int cdir = q.front().second.first;
//		int cnt = q.front().second.second;
//		q.pop();
//		if (cy == endy && cx == endx && cdir == enddir) {
//			return cnt;
//		}
//		for (int i = 1; i <= 3; i++) {
//			int ny = cy + moveDir[cdir].y * i;
//			int nx = cx + moveDir[cdir].x * i;
//			if (ny >= 1 && ny <= N && nx >= 1 && nx <= M) {
//				if (visited[ny][nx][cdir] == true) {
//					continue;
//				}
//				else if (map[ny][nx] == 1) {
//					break;
//				}
//				visited[ny][nx][cdir] = true;
//				q.push(make_pair(make_pair(ny, nx), make_pair(cdir, cnt + 1)));
//			}
//			else {
//				break;
//			}
//		}
//		//방향전환
//		if (visited[cy][cx][tleft(cdir)] == false) {
//			visited[cy][cx][tleft(cdir)] = true;
//			q.push(make_pair(make_pair(cy, cx), make_pair(tleft(cdir), cnt + 1)));
//		}
//
//		if (visited[cy][cx][tright(cdir)] == false) {
//			visited[cy][cx][tright(cdir)] = true;
//			q.push(make_pair(make_pair(cy, cx), make_pair(tright(cdir), cnt + 1)));
//		}
//	}
//}
//int main() {
//	int sy, sx, sdir;
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> map[i][j];
//		}
//	}
//	cin >> sy >> sx >> sdir;
//	cin >> endy >> endx >> enddir;
//	q.push(make_pair(make_pair(sy, sx), make_pair(sdir, 0)));
//	visited[sy][sx][sdir] = true;
//	
//	cout << solve();
//
//}
