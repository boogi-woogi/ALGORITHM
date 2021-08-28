//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <cmath>
//#include <queue>
//#include <cstring>
//#include <string>
//using namespace std;
//int arr[9];
//bool visited[9] = { false };
//int n;
//int result = 0;
//
//vector<int> v;
//
//void dfs(int cnt) {
//	if (cnt == n) {
//		int temp = 0;
//		for (int i = 0; i < n - 1; i++) {
//			temp += abs(v[i] - v[i + 1]);
//		}
//		result = max(result, temp);
//	}
//
//	for (int i = 0; i < n; i++) {
//		if (visited[i] == true) {
//			continue;
//		}
//		visited[i] = true;
//		v.push_back(arr[i]);
//		dfs(cnt + 1);
//		visited[i] = false;
//		v.pop_back();
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	dfs(0);
//	cout << result;
//}
