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
//const int INF = 0x3f3f3f3f;
//int K, T;
//int matrix[501][2];
//int cache[501][501];
//int dp(int start, int end) {
//	if (start == end) {
//		cache[start][end] = 0;
//	}
//	if (start + 1 == end) {
//		return cache[start][end] = matrix[start][0] * matrix[end][0] * matrix[end][1];
//	}
//	if (cache[start][end] != INF) {
//		return cache[start][end];
//	}
//
//	for (int mid = start; mid < end; mid++) {
//		int temp = dp(start, mid) + dp(mid + 1, end) + matrix[start][0] * matrix[mid][1] * matrix[end][1];
//		cache[start][end] = min(cache[start][end], temp);
//	}
//
//	return cache[start][end];
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> K;
//	memset(cache, INF, sizeof(cache));
//	for (int i = 1; i <= K; i++) {
//		cin >> matrix[i][0] >> matrix[i][1];
//	}
//	cout << dp(1, K) << endl;
//}