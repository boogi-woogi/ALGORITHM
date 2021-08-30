#include<iostream>
#include<queue>
using namespace std;
int N, M, map[9][9];
bool visited[9][9];
queue<pair<int, int>> q;
void input() {
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> map[i][j];
		}
	}
}
void BFS(int y, int x) {
	int cnt = 2;
	for (int i = y + 1; i <= N; i++) {
		for (int j = x + 1; j <= M; j++) {
			if(map[i][j]==0)
		}
	}
}
int solve() {
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			if (map[i][j] == 0) {
				BFS(i, j);
				visited[i][j] = true;
			}
		}
	}
}
int main() {
	input();
	cout << solve();
}