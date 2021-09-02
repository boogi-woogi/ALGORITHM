#include<iostream>
using namespace std;
int n;
int answer = 0;
int main() {
	cin >> n;
	while (n > 0) {
		if (n > 5 && ((n-5) % 5 == 0) || ((n-5) % 2 == 0)) {
			n -= 5;
			answer++;
		}
		else {
			n -= 2;
			answer++;
		}
	}
	if (n == 0) {
		cout << answer;
	}
	else {
		cout << -1;
	}
}