#include<iostream>
using namespace std;
string input;
int numA, numB, numC;
bool cache[51][51][51][3][3] = { false, };
bool finish = false;
bool solve(int cntA, int cntB, int cntC, int bef, int bef2, string answer) {
	if (cache[cntA][cntB][cntC][bef][bef2]) return false;
	if (cntA == numA && cntB == numB && cntC == numC) {
		cout << answer;
		return true;
	}
	cache[cntA][cntB][cntC][bef][bef2] = true;

	if (cntA < numA) {
		if (solve( cntA + 1, cntB, cntC, bef2, 0, answer + 'A'))
			return true;
	}

	if (cntB < numB && bef2!=1) {
		if (solve( cntA, cntB+1, cntC, bef2, 1, answer + 'B'))
			return true;
	}
	if (cntC < numC && bef!=2 && bef2!=2) {
		if (solve(cntA, cntB, cntC + 1, bef2, 2, answer + 'C'))
			return true;
	}
	return false;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> input;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == 'A') numA++;
		else if (input[i] == 'B')numB++;
		else if (input[i] == 'C')numC++;
	}
	if (!solve(0, 0, 0, -1, -1, "")){
		cout << -1;
	}

}

