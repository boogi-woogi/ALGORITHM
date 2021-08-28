//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <cmath>
//#include <queue>
//#include <cstring>
//using namespace std;
//int arr[500001];
//int temp[500001];
//int cnt = 0;
//long long result = 0;
//void merge(int left, int right) {
//	int temp_index = left;
//	int mid = (left + right) / 2;
//	int temp_left = left;
//	int temp_right = mid + 1;
//
//	while (temp_left <= mid && temp_right <= right) {
//		if (arr[temp_right] < arr[temp_left]) {
//			temp[temp_index++] = arr[temp_right++];
//			result += mid - temp_left + 1;
//		}
//		else {
//			temp[temp_index++] = arr[temp_left++];
//		}
//	}
//
//
//	if (temp_left > mid) {
//		for (int i = temp_right; i <= right; i++) {
//			temp[temp_index++] = arr[i];
//		}
//	}
//	else {
//		for (int i = temp_left; i <= mid; i++) {
//			temp[temp_index++] = arr[i];
//		}
//	}
//
//
//	for (int i = left; i <= right; i++) {
//		arr[i] = temp[i];
//	}
//
//}
//void msort(int left, int right) {
//	if (left == right) return;
//
//	int mid = (left + right) / 2;
//	msort(left, mid);
//	msort(mid + 1, right);
//	merge(left, right);
//}
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	msort(0, n - 1);
//	cout << result;
//}
//
////2667, 4963 똑같이 안풀림..