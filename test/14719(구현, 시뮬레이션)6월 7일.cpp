//init
//#include <iostream>
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
//int H, W;
//int answer = 0;
//int arr[501];
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> H >> W;
//	for (int i = 0; i < W; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 0; i < W; i++) {
//		int left = 0; int right = 0;
//		for (int j = 0; j < i; j++) {
//			left = max(left, arr[j]);
//		}
//		for (int k = i + 1; k < W; k++) {
//			right = max(right, arr[k]);
//		}
//
//		answer += max(0, min(left, right) - arr[i]);
//	}
//	cout << answer;
//
//}