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
//int cache[1001][1001] = { 0, };
//string A, B;
//void dp(string s, string l) {
//	for (int i = 1; i <= s.length(); i++) {
//		for (int j = 1; j <= l.length(); j++) {
//			if (s[i - 1] == l[j - 1]) {
//				cache[i][j] = cache[i - 1][j - 1] + 1;
//			}
//			else {
//				cache[i][j] = max(cache[i - 1][j], cache[i][j - 1]);
//			}
//		}
//	}
//	cout << cache[s.length()][l.length()];
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> A >> B;
//	if (A.length() > B.length()) {
//		dp(B, A);
//	}
//	else {
//		dp(A, B);
//	}
//}