//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//int R, C;
//char map[51][51];
//bool wvisit[51][51] = { false, };
//bool svisit[51][51] = { false, };
//int my[4] = { -1, 1, 0 ,0 };
//int mx[4] = { 0, 0, -1, 1 };
//queue<pair<pair<int, int>, int>> sq;
//queue<pair<int, int>> wq;
//void wmove() {
//	for (int i = 1; i <= R; i++) {
//		for (int j = 1; j <= C; j++) {
//			if (map[i][j] == '*' && wvisit[i][j] == false) {
//				wq.push(make_pair(i, j));
//				wvisit[i][j] = true;
//			}
//		}
//	}
//	while (!wq.empty()) {
//		int wy = wq.front().first;
//		int wx = wq.front().second;
//		wq.pop();
//		for (int i = 0; i < 4; i++) {
//			int nwy = wy + my[i];
//			int nwx = wx + mx[i];
//			if (nwy <= 0 || nwy > R || nwx <= 0 || nwx > C) continue;
//			if (map[nwy][nwx] == 'D' || map[nwy][nwx] == 'X') continue;
//			map[nwy][nwx] = '*';
//		}
//	}
//	//for (int i = 1; i <= R; i++) {
//	//	for (int j = 1; j <= C; j++) {
//	//		cout << map[i][j];
//	//	}
//	//	cout << endl;
//	/*}*/
//}
//
//void smove(int turn) {
//	int answer = turn;
//	while (!sq.empty()) {
//		int cy = sq.front().first.first;
//		int cx = sq.front().first.second;
//		int cturn = sq.front().second;
//		sq.pop();
//		if (map[cy][cx] == 'D') {
//			cout << cturn << endl;
//			return;
//		}
//		if (answer == cturn + 1) {
//			wmove();
//			answer = cturn + 2;
//		}
//
//
//		for (int i = 0; i < 4; i++) {
//			int ny = cy + my[i];
//			int nx = cx + mx[i];
//			if (ny <= 0 || ny > R || nx <= 0 || nx > C) continue;
//			if ((map[ny][nx] == '.' || map[ny][nx] == 'D') && svisit[ny][nx] == false) {
//				sq.push(make_pair(make_pair(ny, nx), cturn + 1));
//				svisit[ny][nx] = true;
//			}
//		}
//
//	}
//	cout << "KAKTUS" << endl;
//	return;
//}
//int main() {
//	cin >> R >> C;
//	for (int i = 1; i <= R; i++) {
//		for (int j = 1; j <= C; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == 'S') {
//				sq.push(make_pair(make_pair(i, j), 0));
//				svisit[i][j] = true;
//			}
//		}
//	}
//	smove(1);
//}
