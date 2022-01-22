#include<iostream>
using namespace std;
long long S;
long long n = 1;
int answer = 0;
long long sum;
int main() {
	cin >> S;
	while (true) {
		sum += n;
		answer++;
		if (sum > S) {
			answer--;
			cout << answer << endl;
			return 0;
		}
		
		n++;
	}
}