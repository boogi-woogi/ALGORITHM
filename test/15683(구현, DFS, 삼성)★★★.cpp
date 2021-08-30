//#include<iostream>
//#include<queue>
//#include<algorithm>
//using namespace std;
//struct camera {
//	int y;
//	int x;
//	int num;
//};
//int N, M;
//int answer = 100;
//vector<camera> v;
//vector<vector<int>> MAP(8, vector<int>(8));
//void input() {
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> MAP[i][j];
//
//			if (MAP[i][j] != 0 && MAP[i][j] != 6) {
//				v.push_back({ i, j, MAP[i][j] });
//			}
//		}
//	}
//}
//vector<vector<int>> set_rotation(vector<vector<int>> tmp, int dir, int y, int x){
//	if (dir == 0) {
//		for (int i = y; i >= 0; i--) {
//			if (tmp[i][x] == 6) {
//				break;
//			}
//			tmp[i][x] = -1;
//		}
//	}
//	else if (dir == 1) {
//		for (int i = x; i < M; i++) {
//			if (tmp[y][i] == 6) {
//				break;
//			}
//			tmp[y][i] = -1;
//		}
//	}
//	else if (dir == 2) {
//		for (int i = y; i < N; i++) {
//			if (tmp[i][x] == 6) {
//				break;
//			}
//			tmp[i][x] = -1;
//		}
//	}
//	else {
//		for (int i = x; i >= 0; i--) {
//			if (tmp[y][i] == 6) {
//				break;
//			}
//			tmp[y][i] = -1;
//		}
//	}
//
//	return tmp;
//}
//
//int checking(vector<vector<int>> check_map) {
//	int tmp_answer = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (check_map[i][j] == 0) {
//				tmp_answer++;
//			}
//		}
//	}
//	return tmp_answer;
//}
//
//void DFS(vector<vector<int>> tmp, int index) {
//	if (index == v.size()) {
//		answer = min(answer, checking(tmp));
//		return;
//	}
//
//	int y = v[index].y;
//	int x = v[index].x;
//	int cam_num = v[index].num;
//	vector<vector<int>> f_map;
//	if (cam_num == 1) {
//		for (int i = 0; i < 4; i++) {
//			DFS(set_rotation(tmp, i, y, x), index + 1);
//		}
//	}
//	else if (cam_num == 2) {
//		f_map = set_rotation(tmp, 0, y, x);
//		f_map = set_rotation(f_map, 2, y, x);
//		DFS(f_map, index + 1);
//		f_map = set_rotation(tmp, 1, y, x);
//		f_map = set_rotation(f_map, 3, y, x);
//		DFS(f_map, index + 1);
//	}
//	else if (cam_num == 3) {
//		for (int i = 0; i < 4; i++) {
//			f_map = tmp;
//			if (i == 3) {
//				f_map = set_rotation(f_map, 0, y, x);
//				f_map = set_rotation(f_map, 3, y, x);
//				DFS(f_map, index + 1);
//			}
//			else {
//				f_map = set_rotation(f_map, i, y, x);
//				f_map = set_rotation(f_map, i + 1, y, x);
//				DFS(f_map, index + 1);
//			}
//		}
//	}
//	else if (cam_num == 4) {
//		for (int i = 0; i < 4; i++) {
//			f_map = tmp;
//			for (int j = 0; j < 4; j++) {
//				if (i == j) continue;
//				f_map = set_rotation(f_map, j, y, x);
//			}
//			DFS(f_map, index + 1);
//		}
//	}
//	else {
//		f_map = tmp;
//		for (int i = 0; i < 4; i++) {
//			f_map = set_rotation(f_map, i, y, x);
//		}
//		DFS(f_map, index + 1);
//	}
//}
//void solve() {
//	DFS(MAP, 0);
//	cout << answer;
//}
//int main() {
//	input();
//	solve();
//
//
//}