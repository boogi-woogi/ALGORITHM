#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int row[16];
int N;
int answer = 0;


void input() {
	cin >> N;
}
bool isPossible(int r) {
	for (int i = 0; i < r; i++) {
		if ((row[i] == row[r]) || (r - i == (abs(row[r] - row[i])))) return false;
	}
	return true;
}
void solve(int r) {
	if (r == N) {
		answer++;
		return;
	}
	else {
		for (int col = 0; col < N; col++) {
			row[r] = col;

			if (isPossible(r)) {
				solve(r + 1);
			}
		}
	}
}
int main() {
	input();
	solve(0);
	cout << answer << endl;
}