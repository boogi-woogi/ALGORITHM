#include<iostream>
#include<queue>
using namespace std;
int N, M, from, to;
vector<pair<int, int>> arr[1001];
int dt[1001];
const int INF = 987654321;
priority_queue<pair<int, int>> pq;

void input() {
	for (int i = 0; i < 1001; i++) {
		dt[i] = INF;
	}
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int t_from, t_to, cost;
		cin >> t_from >> t_to >> cost;
		arr[t_from].push_back(make_pair(t_to, cost));
	}
	cin >> from >> to;
	dt[from] = 0;
}

void dijsktra() {
	pq.push(make_pair(from, 0));
	while (!pq.empty()) {
		int cur = pq.top().first;
		int cur_dt = -pq.top().second;
		pq.pop();
		if (dt[cur] < cur_dt) continue;
		for (int i = 0; i < arr[cur].size(); i++) {
			int next = arr[cur][i].first;
			int next_dt = cur_dt + arr[cur][i].second;
			if (next_dt < dt[next]) {
				dt[next] = next_dt;
				pq.push(make_pair(next, -next_dt));
			}
		}
	}
}

int main() {
	input();
	dijsktra();
	cout << dt[to];
}