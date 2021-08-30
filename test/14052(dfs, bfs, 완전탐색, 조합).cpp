//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//int N, M, map[9][9];
//bool block[64];
//int check = 0;
//vector<pair<int, int>> virus_init;
//vector<pair<int, int>> possible;
//int ym[4] = { -1, 1, 0, 0 };
//int xm[4] = { 0, 0, -1, 1 };
//int answer;
//queue<pair<int, int>> virus;
//int many = 0;
//void input() {
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == 2) {
//				virus_init.push_back(make_pair(i, j));
//			}
//			if (map[i][j] == 0) {
//				possible.push_back(make_pair(i, j));
//			}
//		}
//	}
//}
//int BFS() {
//	bool virus_visited[9][9] = { false, };
//	int copy[9][9] = { 0, };
//	queue<pair<int, int>> q;
//	int safe = 0;
//	for (int i = 0; i < possible.size(); i++) {
//		if (block[i]) {
//			int blocky = possible[i].first;
//			int blockx = possible[i].second;
//			copy[blocky][blockx] = 1;
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (!copy[i][j]) {
//				copy[i][j] = map[i][j];
//			}
//			else continue;
//
//			if (copy[i][j] == 0) safe++;
//		}
//	}
//
//	for (int i = 0; i < virus_init.size(); i++) {
//		int y = virus_init[i].first;
//		int x = virus_init[i].second;
//		virus_visited[y][x] = true;
//		q.push(make_pair(y, x));
//	}
//
//	while (!q.empty()) {
//		int cy = q.front().first;
//		int cx = q.front().second;
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int ny = cy + ym[i];
//			int nx = cx + xm[i];
//			if (ny<1 || ny>N || nx<1 || nx>M) continue;
//			if (virus_visited[ny][nx] || copy[ny][nx])continue;
//			virus_visited[ny][nx] = true;
//			copy[ny][nx] = 2;
//			safe--;
//			q.push(make_pair(ny, nx));
//		}
//	}
//
//	return safe;
//}
//
//void solve(int index, int cnt) {
//	if (cnt == 3) {
//		answer=max(answer, BFS());
//		return;
//	}
//
//	for (int i = index; i < possible.size(); i++) {
//		if (block[i] == true) continue;
//		block[i] = true;
//
//		solve(i, cnt + 1);
//		block[i] = false;
//	}
//}
//int main() {
//	input();
//	solve(0, 0);
//	cout << answer;
//}