//#include<iostream>
//using namespace std;
//int CASE[21][10];
//int cache[101];
//int cache2[101][2];
//int num[101];
//int N;
//int answer = 0;
//void init() {
//	memset(CASE, 0, sizeof(CASE));
//	memset(cache2, -1, sizeof(cache2));
//	memset(cache, 0, sizeof(cache));
//
//	for (int i = 0; i < 21; i++) {
//		for (int j = 0; j < 10; j++) {
//			if (i + j >= 0 && i + j <= 20) CASE[i][j]++;
//			else if (i - j >= 0 && i - j <= 20) CASE[i][j]++;
//		}
//	}
//	cache[0] = 1;
//}
//void input() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> num[i];
//	}
//}
//bool isin(int num) {
//	if (num >= 0 && num <= 20) return true;
//	return false;
//}
//void solve(int cur_num, int index) {
//	if (index >= N) {
//		answer++;
//		return;
//	}
//	int next_num = cur_num + num[index];
//	if (isin(next_num)) {
//		solve(next_num, index + 1);
//	}
//}
//int main() {
//	init();
//	input();
//	solve()
//}