#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstring>
using namespace std;
int N, M;
bool isConnected[1001];
int parent[1001];
int answer = 0;
vector<pair<int, pair<int, int>>> v;

void input() {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int node1, node2, cost;
		cin >> node1 >> node2 >> cost;
		v.push_back(make_pair(node1, make_pair(node2, cost)));
	}
	for (int i = 1; i <= N; i++) {
		parent[i] = i;
	}
}

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
	return a.second.second < b.second.second;
}


int get_Parent(int node) {
	if (parent[node] == node)return node;
	else {
		return parent[node] = get_Parent(parent[node]);
	}
}

void union_Parent(int n1, int n2) {
	int p1 = get_Parent(n1);
	int p2 = get_Parent(n2);
	if (p1 < p2) {
		parent[p2] = p1;
	}
	else {
		parent[p1] = p2;
	}
}

int comp_Parent(int n1, int n2) {
	int p1 = get_Parent(n1);
	int p2 = get_Parent(n2);
	if (p1 == p2) {
		return 1;
	}
	else {
		return 0;
	}
}


void solve() {
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++) {
		int node1 = v[i].first;
		int node2 = v[i].second.first;
		if (comp_Parent(node1, node2)) continue;
		union_Parent(node1, node2);
		answer += v[i].second.second;
	}
	cout << answer;
}

int main() {
	input();
	solve();
	return 0;
}