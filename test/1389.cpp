#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
int visited[101];
int result[101];
int N, M;
queue<pair<int, int>> q;
vector<int> v[101];
void input() {
	cin >> N >> M;
	for (int i = 1; i <= M; i++) {
		int f1, f2;
		cin >> f1 >> f2;
		v[f1].push_back(f2);
		v[f2].push_back(f1);
	}
}
void BFS(int std) {
	while (!q.empty()) {
		int cur_node = q.front().first;
		int cnt = q.front().second;
		q.pop();
		for (int i = 0; i < v[cur_node].size(); i++) {
			int next_node = v[cur_node][i];
			if (!visited[next_node]) {
				result[std] += cnt;
				visited[next_node] = true;
				q.push(make_pair(next_node, cnt + 1));
			}
		}
	}
}
void solve() {
	for (int i = 1; i <= N; i++) {
		memset(visited, false, sizeof(visited));
		visited[i] = true;
		q.push(make_pair(i, 1));
		BFS(i);
	}
}
int main() {
	input();
	solve();
	int answer = 1;
	for (int i = 2; i <= N; i++) {
		if (result[answer] > result[i]) {
			answer = i;
		}
	}
	cout << answer;
}
//vector<int> v[101];
//int result[101];
//int visited[101];
//int visited_DFS[101];
//int answer = 0x3f3f3f;
//int N, M;
//void input() {
//	cin >> N >> M;
//	for (int i = 1; i <= M; i++) {
//		int f1, f2;
//		cin >> f1 >> f2;
//		v[f1].push_back(f2);
//		v[f2].push_back(f1);
//	}
//}
//
//
//
//void DFS(int prev, int start, int cur, int cnt) {
//	for (int i = 0; i < v[cur].size(); i++) {
//		int next = v[cur][i];
//		if (!visited[next]) {
//			visited[next] = true;
//			result[start] += cnt;
//		}
//	}
//	for (int i = 0; i < v[cur].size(); i++) {
//		int next_DFS = v[cur][i];
//		if (!visited_DFS[next_DFS]) {
//			visited_DFS[next_DFS] = true;
//			if (find(v[prev].begin(), v[prev].end(), next_DFS) != v[prev].end()) {
//				DFS(cur, start, next_DFS, cnt);
//			}
//			else {
//				DFS(cur, start, next_DFS, cnt + 1);
//			}
//		}
//
//	}
//}
//int main() {
//	input();
//	for (int i = 1; i <= N; i++) {
//		memset(visited, false, sizeof(visited));
//		memset(visited_DFS, false, sizeof(visited_DFS));
//		visited[i] = true;
//		visited_DFS[i] = true;
//		DFS(0, i, i, 1);
//	}
//	int answer = 1;
//	for (int i = 2; i <= N; i++) {
//		if (result[answer] > result[i]) {
//			answer = i;
//		}
//	}
//	cout << answer;
	//for (int i = 1; i <= N; i++) {
	//	cout << result[i] << '\n';
	//}
//}