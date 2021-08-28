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
//int sch[1500001][2];
//long long cache[1500001];
//int n;
//void dp() {
//	for (int i = n; i >= 1; i--) {
//		if (sch[i][0] + i > n + 1) {
//			//ex)마지막날 소요되는 상담시간이 1일보다 크면 못함.
//			//그렇게 되면 그 상담을 하지 않은 경우를 봐야함
//			cache[i] = cache[i + 1];
//		}
//		else {//두가지 경우의 수(i번째날 상담을 할 때(+그 상담이 끝나고 다음 상담까지), 
//			  //i번째날 상담을 하지 않을 때)
//			cache[i] = max(sch[i][1] + cache[sch[i][0] + i], cache[i + 1]);
//		}
//	}
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> sch[i][0] >> sch[i][1];
//	}
//	dp();
//	cout << cache[1];
//}