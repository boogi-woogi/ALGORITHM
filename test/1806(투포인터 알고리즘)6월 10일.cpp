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
//int INF = 0x3f3f3f;
//int answer = INF;
//int l = 0, r = 0, LEN = 0, N, M;
//int sum = 0;
//int arr[100'001];
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//
//	while (r <= N) {
//		if (sum < M) {
//			sum += arr[r++];
//			LEN++;
//		}
//		else if (sum >= M) {
//			answer = min(answer, LEN);
//			sum -= arr[l++];
//			LEN--;
//		}
//
//	}
//	if (answer == INF) {
//		cout << 0 << endl;
//		return 0;
//	}
//	cout << answer;
//
//}