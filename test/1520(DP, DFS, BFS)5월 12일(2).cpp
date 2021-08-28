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
//int cache[501][501];
//int map[501][501];
//int ym[4] = { -1, 1, 0, 0 };
//int xm[4] = { 0, 0, -1, 1 };
//int m, n;
//bool isin(int y, int x) {
//	if (y<1 || y>m || x<1 || x>n) {
//		return false;
//	}
//	return true;
//}
//int dp(int cury, int curx) {
//	if (cury == m && curx == n) {
//		return 1;
//	}
//	if (cache[cury][curx] != -1) {
//		return cache[cury][curx];
//	}
//
//	cache[cury][curx] = 0;
//	int std = map[cury][curx];
//	for (int i = 0; i < 4; i++) {
//		int ny = cury + ym[i];
//		int nx = curx + xm[i];
//		if (isin(ny, nx) == false)continue;
//		if (std <= map[ny][nx])continue;
//		cache[cury][curx] = cache[cury][curx] + dp(ny, nx);
//	}
//	return cache[cury][curx];
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> m >> n;
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin >> map[i][j];
//		}
//	}
//	memset(cache, -1, sizeof(cache));
//	cout << dp(1, 1);
//}