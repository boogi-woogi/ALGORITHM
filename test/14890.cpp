//#include<iostream>
//#include<cstring>
//using namespace std;
//int N, L;
//int map[11][11];
//int map2[11][11];
//int answer = 0;
//
//void input() {
//	cin >> N >> L;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> map[i][j];
//			map2[j][i] = map[i][j];
//		}
//	}
//}
//
//bool judge_road(int map[][11], int y, int x) {
//	int std = map[y][x + 1];
//	for (int i = x + 1; i < x + 1 + L; i++) {
//		if (map[y][i] != std) return false;
//	}
//	return true;
//}
//
//void Make_Road(int map[][11]) {
//	for (int i = 1; i <= N; i++) {
//		int Before_Road = 1;
//		bool Can_Road = true;
//
//		for (int j = 1; j <= N - 1; j++) {
//			if (map[i][j] == map[i][j + 1]) Before_Road++;
//			else if (map[i][j] == map[i][j + 1] + 1) {
//				if (judge_road(map, i, j)) {
//					j = j + L - 1;
//					Before_Road = 0;
//				}
//				else {
//					Can_Road = false;
//					break;
//				}
//			}
//			else if (map[i][j] + 1 == map[i][j + 1]) {
//				if (Before_Road >= L) {
//					Before_Road = 1;
//				}
//				else {
//					Can_Road = false;
//					break;
//				}
//			}
//			else if (abs(map[i][j] - map[i][j + 1] >= 2)) {
//				Can_Road = false;
//				break;
//			}
//		}
//		if (Can_Road) {
//			answer++;
//		}
//	}
//}
//int main() {
//	input();
//	Make_Road(map);
//	Make_Road(map2);
//	cout << answer;
//	
//}