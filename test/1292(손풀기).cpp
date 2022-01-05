#include<iostream>
using namespace std;
int a, b;
int arr[1001];

int answer = 0;
void init() {
	int cnt = 1;
	for (int i = 1; i < 1001;) {
		for (int j = 0; j < cnt; j++) {
			arr[i++] = cnt;
		}
		cnt++;
	}

}

int main(){
	init();
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		answer += arr[i];
	}
	cout << answer << endl;
}
