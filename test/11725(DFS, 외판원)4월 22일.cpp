//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <cmath>
//#include <queue>
//#include <string>
//using namespace std;
//const int MAX = 100001;
//vector<int> v[MAX];
//int parent[MAX];
//bool visited[MAX] = { false, };
//
//void f_p(int start) {
//	if (visited[start] == true) {
//		return;
//	}
//	visited[start] = true;
//	for (int i = 0; i < v[start].size(); i++) {
//		int next = v[start][i];
//		if (visited[next] == true) {
//			parent[start] = next;
//		}
//		f_p(next);
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n - 1; i++) {
//		int node1, node2;
//		cin >> node1 >> node2;
//		v[node1].push_back(node2);
//		v[node2].push_back(node1);
//	}
//	f_p(1);
//	for (int i = 1; i <= n; i++) {
//		cout << parent[i] << '\n';
//	}
//
//
//}
//
////2667, 4963 똑같이 안풀림..