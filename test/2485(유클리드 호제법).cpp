//#include<iostream>
//#include<vector>
//using namespace std;
//int N;
//int pt[100001];
//vector<int> dt;
//int answer = 0;
//int common;
//int uclid(int a, int b) {
//	int tmp = 0;
//	while (b != 0) {
//		tmp = a % b;
//		a = b;
//		b = tmp;
//	}
//	return a;
//}
//
//void input() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> pt[i];
//	}
//}
//
//void solve() {
//	for (int i = 1; i < N; i++) {
//		int between = pt[i] - pt[i - 1];
//		dt.push_back(between);
//	}
//	
//	common = dt[0];
//	for (int i = 1; i < dt.size(); i++) {
//		common = uclid(dt[i], common);
//	}
//
//	for (int i = 0; i < dt.size(); i++) {
//		answer += (dt[i] / common)-1;
//	}
//	cout << answer;
//}
//int main() {
//	input();
//	solve();
//}