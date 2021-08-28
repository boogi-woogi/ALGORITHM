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
//const int MOD = 1000000;
//int n;
//int arr[5001];
//int cache[5001] = { 0, };
//int solve(int n) {
//	cache[0] = 1;
//	for (int i = 1; i <= n; i++) {
//		if (i == 1) {
//			if (arr[i] <= 0 || arr[i] > 26) {
//				return 0;
//			}
//			cache[i] = 1;
//		}
//		if (i >= 2) {
//			if (arr[i] == 0) {
//				if (arr[i - 1] * 10 > 20) {
//					return 0;
//				}
//			}
//
//			if (arr[i] > 0 && arr[i] < 10) {
//				cache[i] += cache[i - 1] % MOD;
//			}
//
//			int temp = arr[i - 1] * 10 + arr[i];
//			if (temp >= 10 && temp <= 26) {
//				cache[i] += cache[i - 2] % MOD;
//			}
//		}
//	}
//	return cache[n] % MOD;
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	string s;
//	cin >> s;
//	for (int i = 0; i <= s.length(); i++) {
//		arr[i + 1] = s[i] - '0';
//	}
//	cout << solve(s.length());
//}
//
