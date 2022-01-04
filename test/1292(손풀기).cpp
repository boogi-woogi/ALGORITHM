#include<iostream>
using namespace std;
int a, b;
int arr[1001];
int answer = 0;
void init() {
	int cnt = 1;
	for (int i = 1; i <= 1000; i++) {
	
	}
}

int main(){
	init();
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		answer += arr[i];
	}
	cout << answer << endl;
	for (int i = 1; i <= 7; i++) {
		cout << arr[i] << ' ';
	}
}
