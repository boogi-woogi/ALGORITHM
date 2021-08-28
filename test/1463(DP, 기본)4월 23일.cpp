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
//int n;
//int dp[1000001];
//int solve(int n) {
//	if (n == 1 || n == 2 || n == 3) {
//		return 1;
//	}
//	if (dp[n] != 0) {
//		return dp[n];
//	}
//
//	dp[n] = solve(n - 1) + 1;
//	if (n % 2 == 0) {
//		int temp = solve(n / 2) + 1;
//		dp[n] = min(dp[n], temp);
//	}
//	if (n % 3 == 0) {
//		int temp = solve(n / 3) + 1;
//		dp[n] = min(dp[n], temp);
//	}
//	return dp[n];
//
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n;
//	cout << solve(n);
//}
//
