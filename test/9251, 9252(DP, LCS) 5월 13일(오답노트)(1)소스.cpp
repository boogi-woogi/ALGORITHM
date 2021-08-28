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
//const int INF = 0x3f3f3f3f;
//string A, B;
//int cache[1001][1001];
//void dp(string a, string b) {
//	for (int i = 1; i <= a.length(); i++) {
//		for (int j = 1; j <= b.length(); j++) {
//			if (a[i - 1] == b[j - 1]) {
//				cache[i][j] = cache[i - 1][j - 1] + 1;
//			}
//			else {
//				cache[i][j] = max(cache[i - 1][j], cache[i][j - 1]);
//			}
//		}
//	}
//	cout << cache[a.length()][b.length()] << endl;
//
//	int y = a.length();
//	int x = b.length();
//	stack<int> read;
//	while (cache[y][x] != 0) {
//		if (cache[y][x] == cache[y][x - 1]) {
//			x--;
//		}
//		else if (cache[y][x] == cache[y - 1][x]) {
//			y--;
//		}
//		else {
//			read.push(y - 1);
//			y--;
//			x--;
//		}
//	}
//
//	while (!read.empty()) {
//		cout << A[read.top()];
//		read.pop();
//	}
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
//
//}