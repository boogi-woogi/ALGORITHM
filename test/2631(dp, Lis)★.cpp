//#include<iostream>
//using namespace std;
//int N;
//int cache[201];
//int arr[201];
//
//void input() {
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		cin >> arr[i];
//	}
//}
//void solve() {
//	cache[1] = 1;
//	for (int i = 2; i <= N; i++) {
//		cache[i] = 1;
//		for (int j = 1; j < i; j++) {
//			if (arr[j] < arr[i]) {
//				cache[i] = max(cache[j] + 1, cache[i]);
//			}
//		}
//	}
//	
//	int answer = 0;
//	for (int i = 1; i <= N; i++) {
//		answer = max(cache[i], answer);
//	}
//	cout << N - answer;
//}
//int main() {
//	input();
//	solve();
//}