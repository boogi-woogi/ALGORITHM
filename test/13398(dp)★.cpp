//#include<iostream>
//using namespace std;
//int arr[100'001] = { 0, };
//int cache[100'001][2] = { 0, };
////int left_cache[100'001] = { 0, };
////int right_cache[100'001] = { 0, };
////int answer_cache[100'001] = { 0, };
//int N;
//void input() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//}
//
////int solve() {
////	left_cache[0] = arr[0];
////	int answer = left_cache[0];
////	for (int i = 1; i < N; i++) {
////		left_cache[i] = max(left_cache[i - 1] + arr[i], arr[i]);
////		answer = max(answer, left_cache[i]);
////	}
////	right_cache[N - 1] = arr[N-1];
////	for (int i = N - 2; i >= 0; i--) {
////		right_cache[i] = max(arr[i], right_cache[i+1] + arr[i]);
////	}
////
////	for (int i = 1; i < N - 1; i++) {
////		answer = max(answer, left_cache[i-1]+right_cache[i+1]);
////	}
////	return answer;
////}
//
//int solve() {
//	int ans = arr[0];
//	cache[0][0] = arr[0];
//	cache[0][1] = 0;
//	for (int i = 1; i < N; i++) {
//		cache[i][0] = max(cache[i - 1][0] + arr[i], arr[i]);
//		cache[i][1] = max(cache[i - 1][0], cache[i - 1][1] + arr[i]);
//		ans = max(ans, max(cache[i][0], cache[i][1]));
//	}
//	return ans;
//}
//int main() {
//	input();
//	cout<<solve();
//}