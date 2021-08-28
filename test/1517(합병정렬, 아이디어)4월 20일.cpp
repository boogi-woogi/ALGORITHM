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
//int n;
//int arr[500001];
//int temp[500001];
//long long rs = 0;
//void msort(int left, int right) {
//	int temp_index = left;
//	int l = left;
//	int mid = (left + right) / 2;
//	int r = mid + 1;
//
//	while (l <= mid && r <= right) {
//		if (arr[l] > arr[r]) {
//			rs += mid - l + 1;
//			temp[temp_index++] = arr[r++];
//		}
//		else {
//			temp[temp_index++] = arr[l++];
//		}
//	}
//
//	if (l > mid) {
//		for (int i = r; i <= right; i++) {
//			temp[temp_index++] = arr[i];
//		}
//	}
//	else {
//		for (int i = l; i <= mid; i++) {
//			temp[temp_index++] = arr[i];
//		}
//	}
//
//
//	for (int i = left; i <= right; i++) {
//		arr[i] = temp[i];
//	}
//}
//void merge(int left, int right) {
//	if (left == right)
//		return;
//	int mid = (left + right) / 2;
//
//	merge(left, mid);
//	merge(mid + 1, right);
//	msort(left, right);
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	merge(0, n - 1);
//	cout << rs;
//}
//
