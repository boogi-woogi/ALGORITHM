#include<iostream>
#include<math.h>
#include<cstring>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector<string> vec;
vector<int> answer;
int N;
char one[4] = { '2', '3', '5', '7' };
char two[5] = { '1', '3', '5', '7', '9' };

bool IsPrime(int num) {
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return false;
	}
	return true;
}
void dfs(int s, int cnt) {
	if (cnt == N) answer.push_back(s);
	else {
		for (int i = 0; i < 5; i++) {
			string tmp = to_string(s);
			tmp += two[i];
			if (!IsPrime(stoi(tmp))) continue;
			dfs(stoi(tmp), cnt + 1);
		}
	}
}
int main() {
	cin >> N;
	for (int i = 0; i < 4; i++) {
		dfs(one[i]-'0', 1);
	}
	sort(answer.begin(), answer.end());
	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << endl;
	}
}