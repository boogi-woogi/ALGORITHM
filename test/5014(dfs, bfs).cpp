//#include<iostream>
//#include<vector>
//#include<cstring>
//#include<queue>
//#include<algorithm>
//using namespace std;
////변수
//int m[2];
//queue<pair<int, int>> q;
//bool isvisited[1'000'001] = { false, };
//int F, S, G, U, D;
////함수
//void bfs() {
//	while (!q.empty()) {
//		int cfloor = q.front().first;
//		int cnt = q.front().second;
//		q.pop();
//		if (cfloor == G) {
//			cout << cnt << '\n';
//			return;
//		}
//		if (cfloor + m[0] == G || cfloor + m[1] == G) {
//			cout << cnt + 1 << '\n';
//			return;
//		}
//		for (int i = 0; i < 2; i++) {
//			int next = cfloor + m[i];
//			if (next <= 0 || next > F) continue;
//			if (isvisited[next] == false) {
//				q.push(make_pair(next, cnt + 1));
//				isvisited[next] = true;
//			}
//		}
//	}
//	cout << "use the stairs" << '\n';
//	return;
//}
//
//int main() {
//	cin >> F >> S >> G >> U >> D;
//	m[0] = U;
//	m[1] = -D;
//	q.push(make_pair(S, 0));
//	bfs();
//}