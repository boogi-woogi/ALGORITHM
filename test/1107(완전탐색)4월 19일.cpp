//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <cmath>
//#include <queue>
//#include <cstring>
//#include <string>
//using namespace std;
//bool check[10] = { false, };
//bool checking(string a) {
//	for (int i = 0; i < a.length(); i++) {
//		if (check[a[i] - '0'] == true) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int result = 0;
//	int n, c;
//	cin >> n >> c;
//
//
//	for (int i = 0; i < c; i++) {
//		int temp;
//		cin >> temp;
//		check[temp] = true;
//	}
//
//	string s_n = to_string(n);
//
//
//	result = abs(100 - n);
//	for (int i = 0; i <= 1000000; i++) {
//		int tmp;
//		if (checking(to_string(i)) == true) {
//			tmp = abs(i - n) + to_string(i).length();
//			result = min(tmp, result);
//		}
//	}
//	cout << result;
//}
