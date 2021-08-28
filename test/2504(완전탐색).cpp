//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <cmath>
//#include <queue>
//#include <cstring>
//#include <string>
//#include <deque>
//#include <tuple>
//#include <set>
//using namespace std;
//const int MAX = -999999999;
//const int MIN = 0x3f3f3f3f;
//int num[11];
//int arr[4];
//int N, max_answer = MAX, min_answer = MIN;
//
//void BF(int cur_num, int cnt, int p_cnt, int m_cnt, int s_cnt, int d_cnt) {
//	if (cnt == N - 1) {
//		max_answer = max(max_answer, cur_num);
//		min_answer = min(min_answer, cur_num);
//	}
//	if (p_cnt > 0) {
//		BF(cur_num + num[cnt + 1], cnt + 1, p_cnt - 1, m_cnt, s_cnt, d_cnt);
//	}
//	if (m_cnt > 0) {
//		BF(cur_num - num[cnt + 1], cnt + 1, p_cnt, m_cnt - 1, s_cnt, d_cnt);
//	}
//	if (s_cnt > 0) {
//		BF(cur_num * num[cnt + 1], cnt + 1, p_cnt, m_cnt, s_cnt - 1, d_cnt);
//	}
//	if (d_cnt > 0) {
//		BF(cur_num / num[cnt + 1], cnt + 1, p_cnt, m_cnt, s_cnt, d_cnt - 1);
//	}
//
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> num[i];
//	}
//	for (int i = 0; i < 4; i++) {
//		cin >> arr[i];
//	}
//	BF(num[0], 0, arr[0], arr[1], arr[2], arr[3]);
//	cout << max_answer << endl << min_answer;
//
//}