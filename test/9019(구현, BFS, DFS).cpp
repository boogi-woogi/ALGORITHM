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
//int from, to;
//bool visited[10000];
//queue<pair<int, string>> q;
//void bfs(int to) {
//	while (!q.empty()) {
//		int curn = q.front().first;
//		string curs = q.front().second;
//		q.pop();
//		if (curn == to) {
//			cout << curs << '\n';
//		}
//
//		//D
//		int check_d = 2 * curn;
//		if (check_d > 9999) {
//			check_d %= 10000;
//		}
//		if (visited[check_d] == false) {
//			visited[check_d] = true;
//			q.push(make_pair(check_d, curs + 'D'));
//		}
//
//		//S
//		int check_s;
//		if (curn == 0) {
//			check_s = 9999;
//		}
//		else {
//			check_s = curn - 1;
//		}
//
//		if (visited[check_s] == false) {
//			visited[check_s] = true;
//			q.push(make_pair(check_s, curs + 'S'));
//		}
//
//		//L
//		int check_l;
//		check_l = ((curn % 1000) * 10) + curn / 1000;
//		if (visited[check_l] == false) {
//			visited[check_l] = true;
//			q.push(make_pair(check_l, curs + 'L'));
//		}
//
//		//R
//		int check_r;
//		check_r = ((curn % 10) * 1000) + curn / 10;
//		if (visited[check_r] == false) {
//			visited[check_r] = true;
//			q.push(make_pair(check_r, curs + 'R'));
//		}
//	}
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> from >> to;
//		q.push(make_pair(from, ""));
//		bfs(to);
//		memset(visited, false, sizeof(visited));
//	}
//}
