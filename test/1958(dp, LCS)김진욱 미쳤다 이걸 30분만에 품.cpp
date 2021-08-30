//#include<iostream>
//using namespace std;
//string s1, s2, s3;
//int cache[101][101][101] = { 0, };
//void input() {
//	cin >> s1 >> s2 >> s3;
//}
//void solve() {
//	for (int i = 0; i < s1.length(); i++) {
//		for (int j = 0; j < s2.length(); j++) {
//			for (int k = 0; k < s3.length(); k++) {
//				if ((s1[i] == s2[j])&&(s1[i]==s3[k])) {
//					cache[i+1][j+1][k+1] = cache[i][j][k] + 1;
//				}
//				else {
//					cache[i+1][j+1][k+1]=max(cache[i][j + 1][k + 1], max(cache[i + 1][j][k + 1], cache[i + 1][j + 1][k]));
//				}
//			}
//		}
//	}
//	cout << cache[s1.length()][s2.length()][s3.length()];
//}
//
//int main() {
//	input();
//	solve();
//}