//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <cmath>
//#include <queue>
//#include <cstring>
//using namespace std;
//struct dt {
//	int node, distance;
//};
//vector<dt> v[100001];
//int result = 0;
//int result_node = 0;
//bool visited[100001] = { false, };
//void dfs(int node, int p_dist) {
//	if (visited[node] == true) {
//		return;
//	}
//	if (result < p_dist) {
//		result = p_dist;
//		result_node = node;
//	}
//	visited[node] = true;
//	for (int i = 0; i < v[node].size(); i++) {
//		int n = v[node][i].node;
//		int d = v[node][i].distance;
//		dfs(n, p_dist + d);
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int n;
//	cin >> n;
//	int input;
//	for (int i = 0; i < n; i++) {
//		cin >> input;
//		int node, distance;
//		while (1) {
//			cin >> node;
//			if (node == -1) {
//				break;
//			}
//			cin >> distance;
//			v[input].push_back({ node, distance });
//			v[node].push_back({ input, distance });
//		}
//	}
//	dfs(1, 0);
//	memset(visited, false, sizeof(visited));
//	result = 0;
//	dfs(result_node, 0);
//	cout << result;
//
//
//
//}
//
////2667, 4963 똑같이 안풀림..