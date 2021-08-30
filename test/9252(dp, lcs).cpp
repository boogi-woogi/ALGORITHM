//#include<iostream>
//#include<stack>
//using namespace std;
//string s1, s2;
//int cache[1001][1001];
//stack<char> show;
//int answer = 0;
//void solve() {
//	for (int i = 0; i < s1.length(); i++) {
//		for (int j = 0; j < s2.length(); j++) {
//			if (s1[i] == s2[j]) {
//				cache[i+1][j+1] = cache[i][j] + 1;
//			}
//			else {
//				cache[i+1][j+1] = max(cache[i][j+1], cache[i+1][j]);
//			}
//		}
//	}
//	cout << cache[s1.length()][s2.length()] << endl;
//}
//
//void solve2() {
//	int cx = s2.length(); int cy = s1.length();
//	while (true) {
//		int std = cache[cy][cx];
//		if (std == 0) {
//			break;
//		}
//		if (std == cache[cy-1][cx]) {
//			cy--;
//		}
//		else if (std == cache[cy][cx - 1]) {
//			cx--;
//		}
//		else {
//			show.push(s1[cy-1]);
//			cy--; cx--;
//		}
//	}
//	while (!show.empty()) {
//		cout << show.top();
//		show.pop();
//	}
//}
//
//int main() {
//	cin >> s1 >> s2;
//	solve();
//	solve2();
//}