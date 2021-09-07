#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int V, E, K;
bool visited[20001];
vector<pair<int, int>> v[20001];
priority_queue<pair<int, int>>  pq;
int result[20001];
const int INF = 0x3f3f3f;

void input() {
	cin >> V >> E;
	cin >> K;
	for (int i = 0; i < E; i++) {
		int from, to, val;
		cin >> from >> to >> val;
		v[from].push_back({ to, val });
	}
	for (int i = 1; i <= V; i++) {
		result[i] = INF;
	}
	
	result[K] = 0;
	visited[K] = true;
	pq.push({ 0, K });
	
}




void search() {
	while (!pq.empty()) {
		int current = pq.top().second;
		int distance = -pq.top().first;
		pq.pop();
		if (result[current] < distance) continue;
		for (int i = 0; i < v[current].size(); i++) {
			//선택된 노드의 인접 노드
			int next = v[current][i].first;
			int nextDistance = distance+v[current][i].second;
			if (nextDistance < result[next]) {
				result[next] = nextDistance;
				pq.push(make_pair(-nextDistance,next));
			}
		}
	}
}

int main() {
	input();
	search();
	for (int i = 1; i <= V; i++) {
		if (result[i] == INF) {
			cout << "INF" << '\n';
			continue;
		}
		cout << result[i] << '\n';
	}
}