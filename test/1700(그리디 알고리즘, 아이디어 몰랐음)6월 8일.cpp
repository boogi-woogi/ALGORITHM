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
//bool isOn[101];
//int arr[101];
//int N, K, OnCnt = 0;
//int answer = 0;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> N >> K;
//	for (int i = 1; i <= K; i++) {
//		cin >> arr[i];
//	}
//
//	for (int i = 1; i <= K; i++) {
//		if (isOn[arr[i]] == true)continue;
//		if (OnCnt < N) {
//			isOn[arr[i]] = true;
//			OnCnt++;
//		}
//		else {
//			if (i == K) {
//				answer++;
//				break;
//			}
//			vector<int> CurOn;
//			for (int i = 1; i <= K; i++) {
//				if (isOn[i] == true) {
//					CurOn.push_back(i);
//				}
//			}
//			int ForOff = 0;
//			bool already = false;
//			int next[101] = { 0, };
//			for (int j = i + 1; j <= K; j++) {
//				for (int l = 0; l < CurOn.size(); l++) {
//					if (arr[j] == CurOn[l] && next[CurOn[l]] == 0) {
//						next[arr[j]] = j;
//					}
//				}
//			}
//			for (int l = 0; l < CurOn.size(); l++) {
//				if (next[CurOn[l]] == 0) {
//					isOn[CurOn[l]] = false;
//					isOn[arr[i]] = true;
//					already = true;
//					answer++;
//					break;
//				}
//				else {
//					ForOff = max(ForOff, next[CurOn[l]]);
//				}
//			}
//			if (already == true) continue;
//			else {
//				isOn[arr[ForOff]] = false;
//				isOn[arr[i]] = true;
//				answer++;
//			}
//		}
//	}
//	cout << answer;
//}