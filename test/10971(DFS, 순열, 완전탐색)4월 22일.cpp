//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <cmath>
//#include <queue>
//#include <cstring>
//#include <string>
//using namespace std;
//int w[11][11] = { 0, };
//bool visited[11] = { false, };
//int n;
//int result = 1000000000;
//vector<int> v;
//
//void dfs(int start, int present, int money, int cnt) {
//	if (cnt == n) {
//		if (w[present][start] == 0) return;
//		result = min(result, money + w[present][start]);
//	}
//
//	for (int i = 1; i <= n; i++) {
//		if (visited[i] == true || w[present][i] == 0) {//이미 방문했거나 갈 수 없는 길이라면..
//			continue;
//		}
//		visited[i] = true;
//		dfs(start, i, money + w[present][i], cnt + 1);
//		visited[i] = false;
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin >> w[i][j];
//		}
//	}
//
//	for (int start = 1; start <= n; start++) {
//		visited[start] = true;
//		dfs(start, start, 0, 1);
//		visited[start] = false;
//	}
//	cout << result;
//}
