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
////const int INF = 0x3f3f3f3f;
//bool visited[100001] = { false, };
//deque<pair<int, int>> q;
//int result_sec;
//int A, B;
//int cnt = 0;
//bool isin(int loc) {
//	if (loc >= 0 && loc <= 100000) {
//		return true;
//	}
//	return false;
//}
//void BFS() {
//	while (!q.empty()) {
//		int cur_loc = q.front().first;
//		int cur_sec = q.front().second;
//		q.pop_front();
//		if (cur_loc == B) {
//			cout << cur_sec << endl;
//			return;
//		}
//
//		visited[cur_loc] = true;
//		int loc1 = cur_loc + 1;
//		int loc2 = cur_loc - 1;
//		int loc3 = cur_loc * 2;
//		if (isin(loc1) == true) {
//			if (visited[loc1] == false) {
//				q.push_back(make_pair(loc1, cur_sec + 1));
//			}
//		}
//
//		if (isin(loc2) == true) {
//			if (visited[loc2] == false) {
//				q.push_back(make_pair(loc2, cur_sec + 1));
//			}
//		}
//
//		if (isin(loc3) == true) {
//			if (visited[loc3] == false) {
//				q.push_front(make_pair(loc3, cur_sec));
//			}
//		}
//
//
//
//	}
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> A >> B;
//	if (A == B) {
//		cout << 0 << '\n';
//		return 0;
//	}
//	result_sec = abs(A - B);
//	q.push_front(make_pair(A, 0));
//	visited[A] = true;
//	BFS();
//	return 0;
//}