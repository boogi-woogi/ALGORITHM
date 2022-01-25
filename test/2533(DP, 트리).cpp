#include<iostream>
#include<vector>
using namespace std;
int N;
vector<int> vec[1'000'001];
bool visited[1'000'001];
int cache[1'000'001][2];


void input() {
	cin >> N;
	for (int i = 1; i <= N - 1; i++) {
		int u, v;
		cin >> u >> v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
}
void solve(int n) {
	cache[n][0] = 1;
	visited[n] = true;
	for (int i = 0; i < vec[n].size(); i++) {
		int child = vec[n][i];
		if (visited[child]) continue;
		solve(child);
		cache[n][0] += min(cache[child][0], cache[child][1]);
		cache[n][1] += cache[child][0];
	}
}
int main() {
	input();
	solve(1);
	cout << min(cache[1][0], cache[1][1]);
	return 0;
}