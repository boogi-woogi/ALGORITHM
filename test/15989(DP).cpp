#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int arr[10001][3];
int m = 0;
int N;
vector<int> v;
void init() {
	memset(arr, 0, sizeof(arr));
	arr[1][1] = 1;
	arr[2][1] = 1;
	arr[2][2] = 1;
	arr[3][1] = arr[2][1];
	arr[3][2] = arr[1][2] + arr[1][1];
	arr[3][3] = 1;
}
int input() {
	cin >> N;
	int tmp;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		m = max(m, tmp);
		v.push_back(tmp);
	}
	return m;
}
void solve(int n) {
	for (int i = 4; i <= n; i++) {
		arr[i][1] = arr[i - 1][1];
		arr[i][2] = arr[i - 2][1] + arr[i - 2][2];
		arr[i][3] = arr[i - 3][1] + arr[i - 3][2] + arr[i - 3][3];
	}
	for (int i = 0; i < v.size(); i++) {
		cout<< arr[v[i]][1] + arr[v[i]][2] + arr[v[i]][3]<<endl;
	}
}
int main() {
	init();
	solve(input());
	return 0;
}