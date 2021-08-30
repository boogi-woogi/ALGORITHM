//#include<iostream>
//#include<vector>
//using namespace std;
//int N, K;
//int cache[101][100001] = { 0, };
//vector<pair<int, int>> v;
//int solve() {
//	for (int i = 1; i <= N; i++) {
//		int wei = v[i-1].first;
//		int val = v[i-1].second;
//		for (int j = 1; j <= K; j++) {
//			if (wei > j) cache[i][j] = cache[i - 1][j];
//			else cache[i][j] = max(cache[i - 1][j], cache[i - 1][j - wei] + val);
//		}
//	}
//	return cache[N][K];
//}
//int main() {
//	cin >> N >> K;
//	for (int i = 1; i <= N; i++) {
//		int W, V;
//		cin >> W >> V;
//		v.push_back(make_pair(W, V));
//	}
//	cout<<solve();
//}
//
