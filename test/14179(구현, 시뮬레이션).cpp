#include<iostream>
#include<vector>
using namespace std;
int H, W;
int height[501];
int cur_height = 0;
int answer = 0;
int le, ri;
vector<int> v;

void input() {
	cin >> H >> W;
	for (int i = 0; i < W; i++) {
		cin >> height[i];
	}
}
void solve() {
	cur_height = height[0];
	for (int i = 1; i < W - 1; i++) {
		le = 0; ri = 0;
		for (int j = 0; j < i; j++) {
			le = max(le, height[j]);
		}
		for (int k = i + 1; k < W; k++) {
			ri = max(ri, height[k]);
		}
		if (min(le, ri) < height[i]) continue;
		answer += min(le, ri) - height[i];

	}
	cout << answer << endl;
}
int main() {
	input();
	solve();
}