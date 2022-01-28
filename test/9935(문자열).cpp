#include<iostream>
#include<string>
#include<stack>
using namespace std;

string s;
string boom;
char result[1'000'001];
int s_index = 0;
int b_index;

void input() {
	cin >> s;
	cin >> boom;
	b_index = boom.length() - 1;
}

void solve() {
	for (int i = 0; i < s.length(); i++) {
		result[s_index++] = s[i];
		if (result[s_index - 1] == boom[b_index]) {
			for (int j = 0; j < boom.length(); j++) {
				if (result[s_index - j - 1] == boom[b_index - j]) {
					if (j == boom.length() - 1) {
						s_index -= boom.length();
					}
					continue;
				}
				else {
					break;
				}
			}
		}
	}
	if (s_index == 0) cout << "FRULA" << endl;
	else for (int i = 0; i < s_index; i++) {
		cout << result[i];
	}
	
	
}
int main() {
	input();
	solve();
}