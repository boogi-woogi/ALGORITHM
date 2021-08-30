//#include<iostream>
//using namespace std;
//int N, K;
//long long cache[201][201] = { 0, };
//void input() {
//	cin >> N >> K;
//	/*for (int i = 0; i <= N; i++) {
//		cache[1][i] = 1;
//		cache[0][i] = 0;
//	} version 1*/
//	for (int i = 0; i <= N; i++) {
//		cache[0][i] = 0;
//	}
//	for (int i = 0; i <= N; i++) {
//		cache[1][i] = 1;
//	}
//	for (int i = 1; i <= K; i++) {
//		cache[0][i] = 0;
//	}
//}
//void solve() {
//
//	for (int i = 2; i <= K; i++) {
//		for (int j = 0; j <= N; j++) {
//			for (int l = 0; l <= j; l++) {
//				cache[i][j]+=cache[i - 1][j-l];
//			}
//			cache[i][j] %= 1'000'000'000;
//		}
//	}
//	cout << cache[K][N];
//}
//int main() {
//	input();
//	solve();
//}