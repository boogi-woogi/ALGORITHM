#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
int T, N, K, W;
int taken_time[1001];
int indegree[1001];
vector<int> v[1001];
queue<pair<int, pair<int, int>>> q;
int result[1001];
void init() {
	while (!q.empty()) {
		q.pop();
	}
	memset(result, 0, sizeof(result));
	memset(indegree, 0, sizeof(indegree));
	memset(taken_time, 0, sizeof(taken_time));
	for (int i = 1; i <= 1000; i++) {
		v[i].clear();
	}
}

void solve() {

	while (!q.empty()) {
		if (indegree[W] == 0) {
			cout << result[W] << endl;
			return;
		}
		int cur_building = q.front().first;
		int cnt = q.front().second.first;
		int cur_taken_time = q.front().second.second;
		q.pop();
		
		result[cur_building] = max(cur_taken_time, result[cur_building]);
		int next_building = 0, next_cnt = 0, next_taken_time = 0;
		for (int i = 0; i < v[cur_building].size(); i++) {
			int tmp_building = v[cur_building][i];
			int tmp_cnt = cnt + 1;
			int tmp_taken_time = cur_taken_time + taken_time[tmp_building];
			result[tmp_building] = max(tmp_taken_time, result[tmp_building]);

			/*if (next_taken_time < tmp_taken_time && --indegree[tmp_building] == 0) {
				next_building = tmp_building;
				next_cnt = tmp_cnt;
				next_taken_time = tmp_taken_time;
			}*/
			if (--indegree[tmp_building] == 0) {
				q.push(make_pair(tmp_building, make_pair(tmp_cnt, result[tmp_building])));
			}
		}
		/*if (next_building != 0) q.push(make_pair(next_building, make_pair(next_cnt, next_taken_time)));*/
	}

}

void input() {
	cin >> T;
	for (int i = 1; i <= T; i++) {
		init();
		cin >> N >> K;
		for (int i = 1; i <= N; i++) {
			cin >> taken_time[i];
			result[i] = taken_time[i];
		}
		for (int i = 1; i <= K; i++) {
			int from, to;
			cin >> from >> to;
			v[from].push_back(to);
			indegree[to]++;
		}

		for (int i = 1; i <= N; i++) {
			if (indegree[i] == 0) {
				q.push(make_pair(i, make_pair(1, taken_time[i])));
			}
		}
		cin >> W;
		solve();
	/*	cout << result[W] << endl;*/
	}

}

int main() {
	input();
	return 0;
}