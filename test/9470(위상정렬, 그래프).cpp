#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
bool visited[1001];
bool added[1001];
vector<int> v[1001];
queue<int> q;
int indegree[1001] = { 0, };
int answer[1001];
int T, K, M, P;
void init() {
	for (int i = 0; i <= 1000; i++) {
		answer[i] = 1;
	}
	memset(visited, false, sizeof(visited));
	memset(indegree, false, sizeof(indegree));
	memset(added, false, sizeof(added));
	for (int i = 0; i < 1001; i++) {
		v[i].clear();
	}
}
void solve() {
	while (!q.empty()) {
		int cur = q.front();
		visited[cur] = true;
		q.pop();
		for (int i = 0; i < v[cur].size(); i++) {
			int connected = v[cur][i];
			if (--indegree[connected] == 0) {
				q.push(connected);
			}

			
			if (visited[connected]) {
				if (answer[connected] < answer[cur]) answer[connected] = answer[cur];
				else if (answer[cur] == answer[connected] && !added[connected]) {
					answer[connected]++;
					added[connected] = true;
				}
			}
			else if (!visited[connected]) {
				if (answer[connected] < answer[cur]) answer[connected] = answer[cur];
				visited[connected] = true;
			}
		}
	}
	int m = 1;
	for (int i = 1; i <= M; i++) {
		m = max(m, answer[i]);
	}
	cout << K << ' ' << m << endl;
}
void input() {
	
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> K >> M >> P;
		for (int j = 0; j < P; j++) {
			int from, to;
			cin >> from >> to;
			v[from].push_back(to);
			indegree[to]++;
		}
		for (int k = 1; k <= M; k++) {
			if (indegree[k] == 0) {
				q.push(k);
			}
		}
		solve();
		init();
	}
}

int main() {
	init();
	input();
}