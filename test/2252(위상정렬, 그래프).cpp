#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int N, M;
int answer[32001];
int in_degree[32001] = { 0, };
queue<int> q;
vector<int> v[32001];
void input_init() {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int big, small;
		cin >> big >> small;
		v[big].push_back(small);
		in_degree[small]++;
	}
	for (int i = 1; i <= N; i++) {
		if (in_degree[i] == 0) {
			q.push(i);
		}
	}
}

void solve() {
	for (int j = 1; j <= N; j++) {
		int cur = q.front();
		answer[j] = cur;
		q.pop();
		for (int i = 0; i < v[cur].size(); i++) {
			int connected = v[cur][i];
			if (--in_degree[connected] == 0) {
				q.push(connected);
			}
		}
	}
}
int main() {
	input_init();
	solve();
	for (int i = 1; i <= N; i++) {
		cout << answer[i] << ' ';
	}
}