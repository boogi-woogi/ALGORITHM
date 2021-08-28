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
//const int IMPOSSIBLE = 0x3f3f3f3f;
//int arr[16][16], N, start = 0;
//int cache[16][1 << 16];
//int DFS(int current, int visited) {
//	if (visited == (1 << N) - 1)
//		return arr[current][start] ? arr[current][start] : IMPOSSIBLE;
//	int& ret = cache[current][visited];
//	if (ret != -1) return ret;
//
//	ret = IMPOSSIBLE;
//	for (int i = 0; i < N; i++) {
//		if (visited & (1 << i))continue;
//		if (arr[current][i] == 0)continue;
//		ret = min(ret, DFS(i, visited | (1 << i)) + arr[current][i]);
//	}
//	return ret;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	memset(cache, -1, sizeof(cache));
//	cout << DFS(0, 1);
//}