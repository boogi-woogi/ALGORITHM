//#include<iostream>
//using namespace std;
//string s;
//const int INF = 0x3f3f3f;
//int answer = -INF;
//int N;
//int cal(int l, int r, char oper) {
//	int result = l;
//	if (oper == '-') result -= r;
//	if (oper == '*') result *= r;
//	if (oper == '+') result += r;
//	return result;
//}
//void DFS(int index, int cur) {
//	//종료 조건
//	if (index >= N) {
//		answer = max(answer, cur);
//		return;
//	}
//	
//	char oper;
//	if (index == 0) {
//		oper = '+';
//	}
//	else {
//		oper = s[index - 1];
//	}
//
//	//괄호로 묶는다면
//	if (index < N - 2) {
//		int case1 = cal(s[index]-'0', s[index + 2]-'0', s[index + 1]);
//		
//		DFS(index + 4, cal(cur, case1, oper));
//	}
//	DFS(index + 2, cal(cur, s[index] - '0', oper));
//
//}
//void solve() {
//	cin >> N >> s;
//	DFS(0, 0);
//	cout << answer;
//}
//int main() {
//	solve();
//}
