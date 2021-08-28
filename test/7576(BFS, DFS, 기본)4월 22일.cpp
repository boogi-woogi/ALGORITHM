//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <cmath>
//#include <queue>
//#include <string>
//using namespace std;
//int map[1000][1000];
//int cnt = 0;
//int ym[4] = { -1, 0, 1, 0 };//y, x모두 대각선 방향을 배제하기 위해서 배열로 4개의 케이스를 설정.
//int xm[4] = { 0, 1, 0, -1 };
//int x2 = 0; int y2 = 0;
//int result = 0;
//int sizey;
//int sizex;
//struct tomato {
//	int y, x;
//};
//vector<int> v;
//queue<tomato> q;
//bool judge_inside(int y, int x) { //y좌표와 x좌표가 토마토 상자 안에 있는 좌표인지를 판단하는 함수.
//	if ((y >= 0 && x >= 0) && (y < sizey && x < sizex)) {
//		return true;
//	}
//	return false;
//}
//void bfs() {
//	while (!q.empty()) {
//		int y = q.front().y;
//		int x = q.front().x;
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			y2 = y + ym[i];
//			x2 = x + xm[i];
//			if (judge_inside(y2, x2) == true && map[y2][x2] == 0) { //탐색하려는 다음 좌표가 토마토 상자 
//				map[y2][x2] = map[y][x] + 1;                        //안의 좌표이고 익지 않은 토마토일 경우 				                                                    
//				q.push({ y2, x2 });                                 //그 토마토를 익히고 q에 push.
//			}                                                       //몇일이 걸렸는지 알기위해서 계속 +1을 하는 과정.
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> sizex >> sizey;
//	for (int i = 0; i < sizey; i++) {
//		for (int j = 0; j < sizex; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == 1) { //익은 토마토의 좌표를 미리 q에 push함.
//				q.push({ i, j });
//			}
//		}
//	}
//	bfs();
//	for (int i = 0; i < sizey; i++) {
//		for (int j = 0; j < sizex; j++) {
//			if (map[i][j] == 0) {
//				cout << -1 << '\n';
//				return 0;
//			}
//			if (result < map[i][j]) {
//				result = map[i][j];
//			}
//		}
//	}
//	cout << result - 1;
//	return 0;
//}
//
//2667, 4963 똑같이 안풀림..