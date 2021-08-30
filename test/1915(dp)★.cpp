//#include<iostream>
//#include<math.h>
//using namespace std;
//int N, M, answer;
//int dp[1001][1001];
//char map[1001][1001];
//void input() {
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == '1') dp[i][j] = 1;
//		}
//	}
//}
//int solve() {
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			if (dp[i][j] == 1) {
//				dp[i][j] == 1;
//				if (dp[i - 1][j] != 0 && dp[i - 1][j - 1] != 0 && dp[i][j - 1] != 0) {
//					if (dp[i - 1][j] != 1 && dp[i - 1][j - 1] != 1 && dp[i][j - 1] != 1) {
//						int temp = min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i][j - 1]));
//						temp = sqrt(temp) + 1;
//						dp[i][j] = temp * temp;
//					}
//					else {
//						dp[i][j] = 4;
//					}
//				}
//			}
//			answer = max(dp[i][j], answer);
//		}
//	}
//	
//	return answer;
//}
//int main() {
//	input();
//	cout<<solve();
//}