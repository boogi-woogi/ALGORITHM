//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <cmath>
//#include <queue>
//#include <cstring>
//#include <string>
//using namespace std;
//int from, to;
//int result;
//queue<pair<int, int>> q;
//bool visited[100000 + 1] = { false, };
//
//
//int bfs(int n) {
//	while (!q.empty()) {
//		int present_x = q.front().first;
//		int sec = q.front().second;
//		q.pop();
//		if (present_x == to) {
//			return sec;
//		}
//		visited[present_x] = true;
//		if (present_x + 1 < 100000 + 1 && visited[present_x + 1] == false) {
//			q.push(make_pair(present_x + 1, sec + 1));
//		}
//
//		if (present_x - 1 >= 0 && visited[present_x - 1] == false) {
//			q.push(make_pair(present_x - 1, sec + 1));
//		}
//
//		if (present_x * 2 < 100000 + 1 && visited[present_x * 2] == false) {
//			q.push(make_pair(present_x * 2, sec + 1));
//		}
//	}
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> from >> to;
//	visited[from] = true;
//	q.push(make_pair(from, 0));
//	cout << bfs(from) << endl;
//}
