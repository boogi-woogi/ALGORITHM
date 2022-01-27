#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> vec[11][10];
int N;
void init() {
	if (0 <= N && N <= 10) {
		cout << N << endl;
		return;
	}
	for (int i = 0; i <= 9; i++) {
		vec[1][i].push_back(to_string(i));
	}
	
	int cnt = 9;
	for (int i = 2; i <= 10; i++) {
		for (int j = 1; j <= 9; j++) {

				for (int l = 0; l < j; l++) {
					for (int m = 0; m < vec[i-1][l].size(); m++) {
						
						string tmp = to_string(j);
						tmp += vec[i-1][l][m];
						vec[i][j].push_back(tmp);
						cnt++;
						if (cnt == N) {
							cout << tmp << endl;
							return;
						}
						if (tmp == "9876543210") {
							cout << -1 << endl;
							return;
						}

					}
				}
		
		}
	}
}
void solve() {
	int cnt = 0;
	while (true) {
		for (int i = 1; i <= 10; i++) {
			for (int j = 0; j <= 9; j++) {
				for (int k = 0; k < vec[i][j].size(); k++) {
					if (cnt == N) {
						cout << vec[i][j][k] << endl;
						return;
					}
				}
			}
		}
	}
	cout << -1 << endl;
	return;
}
int main() {
	cin >> N;
	init();
	//solve();
	return 0;
}