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
//int cache[1001];
//int arr[1001];
//int rs = 1;
//int solve(int n) {
//	for (int i = 1; i <= n; i++) {
//		cache[i] = 1;
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j < i; j++) {
//			if (arr[i] > arr[j]) {
//				cache[i] = max(cache[i], cache[j] + 1);
//				rs = max(rs, cache[i]);
//			}
//		}
//	}
//	return rs;
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//	}
//	cout << solve(n);
//}
//
