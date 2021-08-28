//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <cmath>
//#include <queue>
//#include <cstring>
//#include <string>
//#include <deque>
//#include <tuple>
//#include <set>
//using namespace std;
//int row, col, m;
//string s;
//int dp[101][101][81];
//char map[101][101];
//int xm[8] = { 0, 0, -1, 1 };
//int ym[8] = { -1, 1, 0, 0 };
//int rs = 0;
//int dfs(int y, int x, int idx) {
//	if (dp[y][x][idx] != -1)return dp[y][x][idx];
//	if (idx >= s.size())return 1;
//	dp[y][x][idx] = 0;
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 1; j <= m; j++) {
//			int ny = y + ym[i] * j;
//			int nx = x + xm[i] * j;
//			if (ny >= row || ny < 0 || nx >= col || nx < 0)continue;
//			if (map[ny][nx] != s[idx])continue;
//			dp[y][x][idx] += dfs(ny, nx, idx + 1);
//		}
//	}
//	return dp[y][x][idx];
//
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	memset(dp, -1, sizeof(dp));
//	cin >> row >> col >> m;
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			cin >> map[i][j];
//		}
//	}
//	cin >> s;
//	char start = s[0];
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			if (map[i][j] == start) {
//				rs += dfs(i, j, 1);
//			}
