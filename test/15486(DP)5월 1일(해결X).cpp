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
//			//ex)�������� �ҿ�Ǵ� ���ð��� 1�Ϻ��� ũ�� ����.
//			//�׷��� �Ǹ� �� ����� ���� ���� ��츦 ������
//			cache[i] = cache[i + 1];
//		}
//		else {//�ΰ��� ����� ��(i��°�� ����� �� ��(+�� ����� ������ ���� ������), 
//			  //i��°�� ����� ���� ���� ��)
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