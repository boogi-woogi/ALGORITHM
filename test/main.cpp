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
//int arr[1001][1001];
//bool used[1001][1001] = { false, };
//vector<pair<int, int>> v[1001];
//int N, M;
//int FROM, TO;
//bool compare(const pair<int, int>& a, const pair<int, int>& b) {
//	return a.second < b.second;
//}
// void solve(int start, int cur, int dt) {
//	for (int i = 0; i < v[cur].size(); i++) {
//		arr[start][cur] = min(arr[start][cur], dt);
//		int next = v[cur][i].first;
//		int move = v[cur][i].second;
//		if (used[cur][next] == true)continue;
//		used[next][cur] = true;
//		used[cur][next] = true;
//		solve(start, next, dt + move);
//	}
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	memset(arr, INF, sizeof(arr));
//	cin >> N >> M;
//	for (int i = 0; i < M; i++) {
//		int from, to, distance;
//		cin >> from >> to >> distance;
//		v[from].push_back(make_pair(to, distance));
//	}
//	for (int i = 0; i < N; i++) {
//		sort(v[i].begin(), v[i].end(), compare);
//	}
//	cin >> FROM >> TO;
//	solve(FROM, FROM, 0);
//	cout << arr[FROM][TO] << endl;
//	return 0;
//	
//}