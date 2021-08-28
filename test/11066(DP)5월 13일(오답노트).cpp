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
//int cap[501];
//int T, K;
//int dp(int start, int end) {
//	if (start == end) {
//		return 0;
//	}
//	if (start + 1 == end) {
//		return cache[start][start + 1] = cap[start] + cap[start + 1];
//	}
//	if (cache[start][end] != 0x3f3f3f3f) {
//		return cache[start][end];
//	}
//	for (int i = start; i < end; i++) {
//		int left = dp(start, i);
//		int bottom = dp(i + 1, end);
//		cache[start][end] = min(cache[start][end], left + bottom);
//	}
//
//	for (int i = start; i <= end; i++) {
//		cache[start][end] += cap[i];
//	}
//	return cache[start][end];
//
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> T;
//	for (int i = 1; i <= T; i++) {
//		memset(cache, 0x3f, sizeof(cache));
//		cin >> K;
//		for (int i = 1; i <= K; i++) {
//			cin >> cap[i];
//		}
//		cout << dp(1, K) << endl;
//	}
//}