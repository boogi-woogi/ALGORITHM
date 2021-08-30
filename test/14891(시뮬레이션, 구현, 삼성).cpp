//#include<iostream>
//#include<vector>
//#include<queue>
//#include<cstring>
//using namespace std;
//int K;
//vector<int> v[4];
//queue<pair<int, int>> q;
//bool visited[4] = { false, };
//
//
//void r_spin(int cgear, int lpole, int rpole) {
//	if (cgear == 0) {
//		if (!visited[cgear + 1]) {
//			visited[cgear + 1] = true;
//			if (rpole != v[cgear + 1][6]) {
//				q.push(make_pair(cgear + 1, -1));
//			}
//		}
//	}
//	else if (cgear == 3) {
//		if (!visited[cgear - 1]) {
//			visited[cgear - 1] = true;
//			if (lpole != v[cgear - 1][2]) {
//				q.push(make_pair(cgear - 1, -1));
//			}
//		}
//	}
//	else {
//		if (!visited[cgear + 1]) {
//			visited[cgear + 1] = true;
//			if (rpole != v[cgear + 1][6]) {
//				q.push(make_pair(cgear + 1, -1));
//			}
//		}
//		if (!visited[cgear - 1]) {
//			visited[cgear - 1] = true;
//			if (lpole != v[cgear - 1][2]) {
//				q.push(make_pair(cgear - 1, -1));
//			}
//		}
//	}
//
//	int tmp = v[cgear][7];
//	for (int i = 7; i >= 1; i--) {
//		v[cgear][i] = v[cgear][i - 1];
//	}
//	v[cgear][0] = tmp;
//}
//
//void l_spin(int cgear, int lpole, int rpole) {
//	if (cgear == 0) {
//		if (!visited[cgear + 1]) {
//			visited[cgear + 1] = true;
//			if (rpole != v[cgear + 1][6]) {
//				q.push(make_pair(cgear + 1, 1));
//			}
//		}
//	}
//	else if (cgear == 3) {
//		if (!visited[cgear - 1]) {
//			visited[cgear - 1] = true;
//			if (lpole != v[cgear - 1][2]) {
//				q.push(make_pair(cgear - 1, 1));
//			}
//		}
//	}
//	else {
//		if (!visited[cgear + 1]) {
//			visited[cgear + 1] = true;
//			if (rpole != v[cgear + 1][6]) {
//				q.push(make_pair(cgear + 1, 1));
//			}
//		}
//		if (!visited[cgear - 1]) {
//			visited[cgear - 1] = true;
//			if (lpole != v[cgear - 1][2]) {
//				q.push(make_pair(cgear - 1, 1));
//			}
//		}
//	}
//
//	char tmp = v[cgear][0];
//	for (int i = 0; i < 7; i++) {
//		v[cgear][i] = v[cgear][i + 1];
//	}
//	v[cgear][7] = tmp;
//}
//
//void BFS() {
//	while (!q.empty()) {
//		int cur_gear = q.front().first;
//		int spin_dir = q.front().second;
//		q.pop();
//
//		char left_pole = v[cur_gear][6];
//		char right_pole = v[cur_gear][2];
//
//		if (spin_dir == 1) {
//			r_spin(cur_gear, left_pole, right_pole);
//		}
//		else {
//			l_spin(cur_gear, left_pole, right_pole);
//		}
//
//	}
//}
//
//
//void input() {
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 8; j++) {
//			char tpole;
//			cin >> tpole;
//			v[i].push_back(tpole);
//		}
//	}
//	cin >> K;
//	for (int i = 0; i < K; i++) {
//		memset(visited, false, sizeof(visited));
//		int gnum, sdir;
//		cin >> gnum >> sdir;
//		visited[gnum-1] = true;
//		q.push(make_pair(gnum-1, sdir));
//		BFS();
//
//	}
//}
//
//
//int main() {
//	int answer = 0;
//	input();
//	for (int i = 0; i < 4; i++) {
//		if (i == 0) {
//			if (v[i][0] == '1') {
//				answer += 1;
//			}
//		}
//		else if (i == 1) {
//			if (v[i][0] == '1') {
//				answer += 2;
//			}
//		}
//		else if (i == 2) {
//			if (v[i][0] == '1') {
//				answer += 4;
//			}
//		}
//		else if(i==3){
//			if (v[i][0] == '1') {
//				answer += 8;
//			}
//		}
//	}
//	cout << answer;
//}