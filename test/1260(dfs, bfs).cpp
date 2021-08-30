//#include<iostream>
//#include<vector>
//#include<cstring>
//#include<queue>
//#include <algorithm>
//using namespace std;
//변수
//vector<int> v[1001];
//queue<int> q;
//bool isvisited[1001] = { false, };
//int N, M, V;
//함수
//void dfs(int cur) {
//	if (isvisited[cur] == true) {
//		return;
//	}
//	isvisited[cur] = true;
//	cout << cur << " ";
//	for (int i = 0; i < v[cur].size(); i++) {
//		int next = v[cur][i];
//		if (isvisited[next] == true)continue;
//		else dfs(next);
//	}
//}
//void bfs(int start) {
//	q.push(start);
//	isvisited[start] = true;
//	while (!q.empty()) {
//		int cnode = q.front();
//		cout << cnode << " ";
//		q.pop();
//		for (int i = 0; i < v[cnode].size(); i++) {
//			int next = v[cnode][i];
//			if (isvisited[next] == false) {
//				q.push(next);
//				isvisited[next] = true;
//			}
//		}
//	}
//}
//int main() {
//	cin >> N >> M >> V;
//	for (int i = 1; i <= M; i++) {
//		int from, to;
//		cin >> from >> to;
//		v[from].push_back(to);
//		v[to].push_back(from);
//	}
//	for (int i = 1; i <= N; i++) {
//		sort(v[i].begin(), v[i].end());
//	}
//	dfs(V);
//	memset(isvisited, false, sizeof(isvisited));
//	cout << '\n';
//
//	bfs(V);
//}