//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <cmath>
//#include <queue>
//#include <cstring>
//#include <string>
//#include <deque>
//#include <tuple>
//#include <set>
//using namespace std;
//struct water {
//	int a, b, c;
//};
//int limit[3];
//bool visited[201][201];
//bool rs[201];
//queue<water> q;
//
//void bfs() {
//	while (!q.empty()) {
//		//현재 A, B, C 물통이 가지고 있는 양
//		int pa = q.front().a;
//		int pb = q.front().b;
//		int pc = q.front().c;
//		q.pop();
//		if (pa == 0) {
//			rs[pc] = true;
//		}
//		int cga = limit[0] - pa;
//		int cgb = limit[1] - pb;
//		int cgc = limit[2] - pc;
//
//		int nb;
//		int nc;
//		int na;
//
//		//A에서 B
//		if (pa >= cgb) {
//			nb = pb + cgb;
//			na = pa - cgb;
//			if (visited[na][nb] == false) {
//				visited[na][nb] = true;
//				q.push({ na, nb, pc });
//			}
//		}
//		else {
//			nb = pb + pa;
//			na = 0;
//			if (visited[na][nb] == false) {
//				visited[na][nb] = true;
//				q.push({ na, nb, pc });
//			}
//		}
//
//		//A에서 C
//		if (pa >= cgc) {
//			nc = pc + cgc;
//			na = pa - cgc;
//			if (visited[na][pb] == false) {
//				visited[na][pb] = true;
//				q.push({ na, pb, nc });
//			}
//		}
//		else {
//			nc = pc + pa;
//			na = 0;
//			if (visited[na][pb] == false) {
//				visited[na][pb] = true;
//				q.push({ na, pb, nc });
//			}
//		}
//
//		//B에서 A
//		if (pb >= cga) {
//			na = pa + cga;
//			nb = pb - cga;
//			if (visited[na][nb] == false) {
//				visited[na][nb] = true;
//				q.push({ na, nb, pc });
//			}
//		}
//		else {
//			na = pa + pb;
//			nb = 0;
//			if (visited[na][nb] == false) {
//				visited[na][nb] = true;
//				q.push({ na, nb, pc });
//			}
//		}
//
//		//B에서 C
//		if (pb >= cgc) {
//			nc = pc + cgc;
//			nb = pb - cgc;
//			if (visited[pa][nb] == false) {
//				visited[pa][nb] = true;
//				q.push({ pa, nb, nc });
//			}
//		}
//		else {
//			nc = pc + pb;
//			nb = 0;
//			if (visited[pa][nb] == false) {
//				visited[pa][nb] = true;
//				q.push({ pa, nb, nc });
//			}
//		}
//
//		//C에서 A
//		if (pc >= cga) {
//			na = pa + cga;
//			nc = pc - cga;
//			if (visited[na][pb] == false) {
//				visited[na][pb] = true;
//				q.push({ na, pb, nc });
//			}
//		}
//		else {
//			na = pa + pc;
//			nc = 0;
//			if (visited[na][pb] == false) {
//				visited[na][pb] = true;
//				q.push({ na, pb, nc });
//			}
//		}
//
//
//		//C에서 B
//		if (pc >= cgb) {
//			nb = pb + cgb;
//			nc = pc - cgb;
//			if (visited[pa][nb] == false) {
//				visited[pa][nb] = true;
//				q.push({ pa, nb, nc });
//			}
//		}
//		else {
//			nb = pb + pc;
//			nc = 0;
//			if (visited[pa][nb] == false) {
//				visited[pa][nb] = true;
//				q.push({ pa, nb, nc });
//			}
//		}
//	}
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> limit[0] >> limit[1] >> limit[2];
//	q.push({ 0, 0, limit[2] });
//	bfs();
//	for (int i = 0; i < 202; i++) {
//		if (rs[i]) {
//			cout << i << ' ';
//		}
//	}
//}
