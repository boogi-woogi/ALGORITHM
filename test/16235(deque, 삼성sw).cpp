//#include<iostream>
//#include<algorithm>
//#include<deque>
//#include<queue>
//#include<vector>
//using namespace std;
//struct tree {
//	int y;
//	int x;
//	int age;
//	bool life;
//};
//struct dir {
//	int y;
//	int x;
//};
//int N, M, K;
//int year = 0;
//int answer = 0;
//vector<tree> v;
//deque<tree> alive;
//queue<tree> dead;
//int map[11][11];
//int machine[11][11];
//
//dir mv[8] = { {-1, 0}, {-1, 1}, {0, 1}, {1, 1},
//	{1, 0}, {1, -1}, {0, -1}, {-1, -1} };
//
//bool cmp(tree a, tree b) {
//	return a.age < b.age;
//}
//
//void input() {
//	cin >> N >> M >> K;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> machine[i][j];
//			map[i][j] = 5;
//		}
//	}
//
//	for (int i = 1; i <= M; i++) {
//		int y, x, age;
//		cin >> y >> x >> age;
//		alive.push_back({ y, x, age, true });
//	}
//}
//
//void spring() {
//	deque<tree> result;
//	while (!alive.empty()) {
//		tree cur_tree = alive.front();
//		alive.pop_front();
//		if (cur_tree.age <= map[cur_tree.y][cur_tree.x]) {
//			map[cur_tree.y][cur_tree.x] -= cur_tree.age;
//			cur_tree.age++; /*이 부분*/
//			result.push_front(cur_tree);/*이 부분*/
//		}
//		else {
//			cur_tree.life = false; /*이 부분*/
//			dead.push(cur_tree);
//		}
//	}
//	alive.swap(result);
//}
//
//
//void summer() {
//	while (!dead.empty()) {
//		tree cur_tree = dead.front();
//		dead.pop();
//		map[cur_tree.y][cur_tree.x] += cur_tree.age / 2;
//	}
//}
//
//void fall() {
//	deque<tree> result;
//	while (!alive.empty()) {
//		tree cur_tree = alive.front();
//		alive.pop_front();
//		if (cur_tree.age % 5 == 0) {
//			for (int j = 0; j < 8; j++) {
//				int ny = cur_tree.y + mv[j].y;
//				int nx = cur_tree.x + mv[j].x;
//				if (nx<1 || nx>N || ny<1 || ny>N) continue;
//				result.push_front({ ny, nx, 1, true });/*이 부분*/
//			}
//			result.push_back(cur_tree);
//		}
//		else {
//			result.push_back(cur_tree);
//		}
//	}
//	alive.swap(result);
//}
//
//void winter() {
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			map[i][j] += machine[i][j];
//		}
//	}
//}
//
//int solve() {
//	while (K--) {
//		sort(v.begin(), v.end(), cmp);
//		spring();
//		summer();
//		fall();
//		winter();
//		year++;
//	}
//	return alive.size();
//
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	input();
//	cout << solve();
//}
