#include<iostream>
#include<queue>
using namespace std;
int N, M, K;
int cy, cx;
int MAP[21][21];
int dice[7] = { 0, };
int ym[5] = { 0, 0, 0, -1, 1 };
int xm[5] = { 0, 1, -1, 0, 0 };
queue<pair<pair<int, int>, int>> q;
bool isin(int y, int x) {
	if (y >= N || y<0 || x>=M || x < 0) {
		return false;
	}
	return true;
}
void roll(int dir) {
	int temp[7];
	for (int i = 1; i <= 6; i++) {
		temp[i] = dice[i];
	}
	if (dir == 1) {
		dice[1] = temp[3];
		dice[3] = temp[6];
		dice[4] = temp[1];
		dice[6] = temp[4];
	}
	else if (dir == 2) {
		dice[1] = temp[4];
		dice[3] = temp[1];
		dice[4] = temp[6];
		dice[6] = temp[3];
	}
	else if (dir == 3) {
		dice[1] = temp[2];
		dice[2] = temp[6];
		dice[5] = temp[1];
		dice[6] = temp[5];
	}
	else if (dir == 4) {
		dice[1] = temp[5];
		dice[2] = temp[1];
		dice[5] = temp[6];
		dice[6] = temp[2];
	}
}

void solve(int dir) {
	int ny = cy + ym[dir];
	int nx = cx + xm[dir];
	if (!isin(ny, nx)) return;
	roll(dir);
	if (MAP[ny][nx] == 0) {
		MAP[ny][nx] = dice[1];
	}
	else {
		dice[1] = MAP[ny][nx];
		MAP[ny][nx] = 0;
	}
	cy = ny;
	cx = nx;
	cout << dice[6] << '\n';
}
void input() {
	cin >> N >> M;
	cin >> cy >> cx >> K;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> MAP[i][j];
		}
	}
}
int main() {
	input();
	for (int i = 1; i <= K; i++) {
		int move;
		cin >> move;
		solve(move);
	}
}