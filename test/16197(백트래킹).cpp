#include<iostream>
#include<queue>
using namespace std;
int N, M;
queue < pair<pair<int, int>, pair<int, int>>> q;
int ym[4] = { -1, 1, 0, 0 };
int xm[4] = { 0, 0, -1, 1 };
int iy = -1, ix = -1, iy2 = -1, ix2 = -1;
char map[21][21];
int answer = 987654321;
int check[21][21];
int check2[21][21];
void input() {
	for (int i = 0; i < 21; i++) {
		for (int j = 0; j < 21; j++) {
			check[i][j] = 987654321;
			check2[i][j] = 987654321;
		}
	}
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			char tmp;
			cin >> tmp;
			if (tmp == 'o') {
				if (iy != -1) {
					iy2 = i;
					ix2 = j;
				}
				else {
					iy = i;
					ix = j;
				}
				map[i][j] = '.';
			}
			else if (tmp == '.') {
				map[i][j] = '.';
			}
			else {
				map[i][j] = '#';
			}
		}
	}
	check[iy][ix] = 0;
	check[iy2][ix2] = 0;
	/*q.push(make_pair(make_pair(iy, ix), make_pair(iy2, ix2)));*/
}
bool isin(int y, int x) {
	if (y < 1 || y>N || x<1 || x>M)return false;
	return true;
}
void solve(int cury, int curx, int cury2, int curx2, int cnt) {
	if (cnt >= 11) return;
	bool flag = isin(cury, curx);
	bool flag2 = isin(cury2, curx2);
	if (flag && !flag2) {
		if (answer == -1) answer = cnt;
		else {
			answer = min(answer, cnt);
		}
		return;
	}
	else if (!flag && flag2) {
		if (answer == -1) answer = cnt;
		else {
			answer = min(answer, cnt);
		}
		return;
	}
	for (int i = 0; i < 4; i++) {
		int ny = cury + ym[i];
		int nx = curx + xm[i];

		int ny2 = cury2 + ym[i];
		int nx2 = curx2 + xm[i];
		if (isin(ny, nx) && isin(ny2, nx)) {
			if (map[ny][nx] == '#') {
				ny = cury;
				nx = curx;
			}
			if (map[ny2][nx2] == '#') {
				ny2 = cury2;
				nx2 = curx2;
			}
			/*if (check[ny][nx] <= cnt + 1 && check2[ny2][nx2] <= cnt + 1) continue;*/
		}
		else if (!isin(ny, nx) && !isin(ny2, nx2)) continue;
		solve(ny, nx, ny2, nx2, cnt + 1);
	}
}

int main() {
	input();
	solve(iy, ix, iy2, ix2, 0);
	if (answer == 987654321) {
		cout << -1 << endl;
	}
	else {
		cout << answer << endl;
	}
}