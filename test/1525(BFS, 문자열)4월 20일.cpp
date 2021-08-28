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
//const string END = "123456780";
//string input="";
//int xm[4] = { 0, 0, -1, 1 };
//int ym[4] = { -1, 1, 0, 0 };
//char arr[3][3];
//set<string> visited;
//queue<pair<string, int>> q;
//void bfs() {
//	while (!q.empty()) {
//		string c_string = q.front().first;
//		int cnt = q.front().second;
//		q.pop();
//
//		if (c_string == END) {
//			cout << cnt;
//			return;
//		}
//
//		int zero = c_string.find('0');
//		int y = zero / 3;
//		int x = zero % 3;
//
//		for (int i = 0; i < 4; i++) {
//			int nx = x + xm[i];
//			int ny = y + ym[i];
//			if (ny >= 3 || ny < 0 || nx >= 3 || nx < 0) continue;
//			string next = c_string;
//			swap(next[3 * y + x], next[ny * 3 + nx]);
//
//			if (visited.find(next)!=visited.end()) continue;
//			visited.insert(next);
//			q.push(make_pair(next, cnt + 1));
//		}
//	}
//	cout << -1;
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			input += arr[i][j];
//		}
//	}
//	visited.insert(input);
//	q.push(make_pair(input, 0));
//	bfs();
//}
