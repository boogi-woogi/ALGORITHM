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
//bool sosu[10000] = { false, };
//bool visited[10000] = { false, };
//
//void bfs() {
//	while (!q.empty()) {
//		int present = q.front().first;
//		int cnt = q.front().second;
//		q.pop();
//		if (present == to) {
//			cout << cnt << '\n';
//			return;
//		}
//		for (int i = 0; i < 4; i++) {
//			int next;
//			for (int j = 0; j < 10; j++) {
//				string s = to_string(present);
//
//				s[i] = j + '0';
//				next = stoi(s);
//
//				if (sosu[next] == false)continue;
//				if (1000 > next || next >= 10000)continue;
//				if (visited[next] == true)continue;
//
//				q.push(make_pair(next, cnt + 1));
//				visited[next] = true;
//			}
//
//		}
//	}
//	cout << "Impossible" << endl;
//	return;
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	memset(sosu, true, sizeof(sosu));
//	for (int i = 2; i < sqrt(10000); i++) {
//		for (int j = 2; i * j < 10000; j++) {
//			sosu[i * j] = false;
//		}
//	}
//
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; i++) {
//		cin >> from >> to;
//		visited[from] = true;
//		q.push(make_pair(from, 0));
//		bfs();
//		memset(visited, false, sizeof(visited));
//		while (!q.empty()) {
//			q.pop();
//		}
//	}
//
//}
