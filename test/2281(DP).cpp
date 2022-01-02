#include<iostream>
#include<cstring>
using namespace std;
int N, M;
int name[1001];
int cache[1001][1001];
void input() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> name[i];
	}
}
int solve(int index, int count) {
	if (index >= N) {
		return 0;
	}
	if (cache[index][count] != -1) return cache[index][count];

	cache[index][count] = (M - count + 1) * (M - count + 1) + solve(index + 1, name[index] + 1);
	if (count + name[index] <= M) {
		cache[index][count] = min(cache[index][count], solve(index + 1, count + name[index] + 1));
	}
	return cache[index][count];

	
}
int main() {
	input();
	memset(cache, -1, sizeof(cache));
	cout<<solve(0, 0)<<endl;
}