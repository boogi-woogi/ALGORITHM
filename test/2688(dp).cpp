//#include<iostream>
//using namespace std;
//int T;
//long long dp[65][10];
//void solve(int n) {
//	for (int i = 2; i <= n; i++) {
//		for (int j = 0; j <= 9; j++) {
//			if (dp[i][j] != 0) {
//				continue;
//			}
//
//			if (j == 0) {
//				dp[i][j] = 1;
//			}
//			else {
//				for (int k = 0; k <= j; k++) {
//					dp[i][j] += dp[i - 1][k];
//				}
//			}
//		}
//	}
//	long long answer = 0;
//	for (int i = 0; i <= 9; i++) {
//		answer += dp[n][i];
//	}
//	cout << answer << endl;
//}
//void input() {
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//		int n;
//		cin >> n;
//		solve(n);
//	}
//}
//int main() {
//	for (int i = 0; i <= 9; i++) {
//		dp[1][i] = 1;
//	}
//	input();
//}