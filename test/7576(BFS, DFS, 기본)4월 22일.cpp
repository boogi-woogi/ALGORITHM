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
//int ym[4] = { -1, 0, 1, 0 };//y, x��� �밢�� ������ �����ϱ� ���ؼ� �迭�� 4���� ���̽��� ����.
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
//bool judge_inside(int y, int x) { //y��ǥ�� x��ǥ�� �丶�� ���� �ȿ� �ִ� ��ǥ������ �Ǵ��ϴ� �Լ�.
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
//			if (judge_inside(y2, x2) == true && map[y2][x2] == 0) { //Ž���Ϸ��� ���� ��ǥ�� �丶�� ���� 
//				map[y2][x2] = map[y][x] + 1;                        //���� ��ǥ�̰� ���� ���� �丶���� ��� 				                                                    
//				q.push({ y2, x2 });                                 //�� �丶�並 ������ q�� push.
//			}                                                       //������ �ɷȴ��� �˱����ؼ� ��� +1�� �ϴ� ����.
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
//			if (map[i][j] == 1) { //���� �丶���� ��ǥ�� �̸� q�� push��.
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
//2667, 4963 �Ȱ��� ��Ǯ��..