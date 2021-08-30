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
//int N;
//vector<pair<int, int>> v;
//bool visited[16] = { false, };
//int rs = 0;
//int answer = 0;
//void input() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int time, money;
//		cin >> time >> money;
//		v.push_back(make_pair(time, money));
//	}
//}
//void DFS(int index, int cur_money) {
//	if (index > N) return;
//	answer = max(answer, cur_money);
//	for (int i = index; i < N; i++) {
//		DFS(index + v[i].first, cur_money + v[i].second);
//	}
//}
//void solve() {
//	DFS(0, 0);
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	input();
//	solve();
//	cout << answer << endl ;
//	return 0;
//}
//
