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
////vector<string> voc;
//string voc[50];
//bool pos[26];
//
//int N, K;
//int answer = 0;
//void DFS(int id, int cnt) {
//	if (cnt == K) {
//		int temp = 0;
//		for (int i = 0; i < N; i++) {
//			bool flag = true;
//			for (int j = 0; j < voc[i].length(); j++) {
//				if (pos[voc[i][j] - 'a'] == false) {
//					flag = false;
//					break;
//				}
//			}
//			if (flag == true) {
//				temp++;
//			}
//		}
//		answer = max(answer, temp);
//		return;
//	}
//
//	for (int i = id; i < 26; i++) {
//		if (pos[i] == true)continue;
//		pos[i] = true;
//		DFS(i, cnt + 1);
//		pos[i] = false;
//	}
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> N >> K;
//	for (int i = 0; i < N; i++) {
//		cin >> voc[i];
//	}
//
//	if (K < 5) {
//		cout << 0;
//		return 0;
//	}
//
//	pos['a' - 'a'] = true;
//	pos['c' - 'a'] = true;
//	pos['i' - 'a'] = true;
//	pos['n' - 'a'] = true;
//	pos['t' - 'a'] = true;
//	DFS(0, 5);
//	cout << answer;
//}