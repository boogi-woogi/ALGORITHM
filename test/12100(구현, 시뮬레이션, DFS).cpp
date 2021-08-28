#include<iostream>
#include<vector>
using namespace std;
int N;
vector<vector<int>> v(21, vector<int>(21, 0));
int ym[4] = { -1, 1, 0, 0 };
int xm[4] = { 0, 0, -1, 1 };
int answer = 0;

void move_left(vector<vector<int>>& map, int n) {
	bool cant_merge[21][21] = { false, };
	for (int i = 1; i <= N; i++) {
		int j = 1;
		int temp_index;
		bool start = false;
		while (j <= N) {
			if (!start) {
				temp_index = j;
			}
			if (temp_index == 1) {
				j++;
				start = false;
				continue;
			}
			if (map[i][temp_index] == 0) {
				j++;
				start = false;
				continue;
			}

			if (map[i][temp_index - 1] == map[i][temp_index]) {
				if (cant_merge[i][temp_index - 1]) {
					j++;
					start = false;
					continue;
				}
				cant_merge[i][temp_index - 1] = true;
				map[i][temp_index - 1] *= 2;
				map[i][temp_index] = 0;
				j++;
				start = false;
				continue;
			}
			else if (map[i][temp_index - 1] == 0) {
				map[i][temp_index - 1] = map[i][temp_index];
				map[i][temp_index] = 0;
				temp_index--;
				start = true;
				continue;
			}
			else if (map[i][temp_index - 1] != map[i][temp_index]) {
				j++;
				start = false;
				continue;
			}
		}
	}
}

void move_right(vector<vector<int>>& map, int n) {
	bool cant_merge[21][21] = { false, };
	for (int i = 1; i <= N; i++) {
		int j = N;
		int temp_index;
		bool start = false;
		while (j >= 1) {
			if (!start) {
				temp_index = j;
			}
			if (temp_index == N) {
				j--;
				start = false;
				continue;
			}
			if (map[i][temp_index] == 0) {
				j--;
				start = false;
				continue;
			}

			if (map[i][temp_index + 1] == map[i][temp_index]) {
				if (cant_merge[i][temp_index + 1]) {
					j--;
					start = false;
					continue;
				}
				cant_merge[i][temp_index + 1] = true;
				map[i][temp_index + 1] *= 2;
				map[i][temp_index] = 0;
				j--;
				start = false;
				continue;
			}
			else if (map[i][temp_index + 1] == 0) {
				map[i][temp_index + 1] = map[i][temp_index];
				map[i][temp_index] = 0;
				temp_index++;
				start = true;
				continue;
			}
			else if (map[i][temp_index + 1] != map[i][temp_index]) {
				j--;
				start = false;
				continue;
			}
		}
	}
}


void move_up(vector<vector<int>>& map, int n) {
	bool cant_merge[21][21] = { false, };
	for (int i = 1; i <= N; i++) {
		int j = 1;
		int temp_index;
		bool start = false;
		while (j <= N) {
			if (!start) {
				temp_index = j;
			}
			if (temp_index == 1) {
				j++;
				start = false;
				continue;
			}
			if (map[temp_index][i] == 0) {
				j++;
				start = false;
				continue;
			}

			if ((map[temp_index - 1][i] == map[temp_index][i])) {
				if (cant_merge[temp_index - 1][i]) {
					j++;
					start = false;
					continue;
				}
				map[temp_index - 1][i] *= 2;
				map[temp_index][i] = 0;
				cant_merge[temp_index - 1][i] = true;
				j++;
				start = false;
				continue;
			}
			else if (map[temp_index - 1][i] == 0) {
				map[temp_index - 1][i] = map[temp_index][i];
				map[temp_index][i] = 0;
				temp_index--;
				start = true;
				continue;
			}
			else if (map[temp_index - 1][i] != map[temp_index][i]) {
				j++;
				start = false;
				continue;
			}
		}
	}
}

void move_down(vector<vector<int>>& map, int n) {
	bool cant_merge[21][21] = { false, };
	for (int i = 1; i <= N; i++) {
		int j = N;
		int temp_index;
		bool start = false;
		while (j >= 1) {
			if (!start) {
				temp_index = j;
			}
			if (temp_index == N) {
				j--;
				start = false;
				continue;
			}
			if (map[temp_index][i] == 0) {
				j--;
				start = false;
				continue;
			}

			if ((map[temp_index + 1][i] == map[temp_index][i])) {
				if (cant_merge[temp_index + 1][i]) {
					j--;
					start = false;
					continue;
				}
				cant_merge[temp_index + 1][i] = true;
				map[temp_index + 1][i] *= 2;
				map[temp_index][i] = 0;
				j--;
				start = false;
				continue;
			}
			else if (map[temp_index + 1][i] == 0) {
				map[temp_index + 1][i] = map[temp_index][i];
				map[temp_index][i] = 0;
				temp_index++;
				start = true;
				continue;
			}
			else if (map[temp_index + 1][i] != map[temp_index][i]) {
				j--;
				start = false;
				continue;
			}
		}
	}
}

void input() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			int n;
			cin >> n;
			v[i][j] = n;
		}
	}
}

int find_max(vector<vector<int>> map) {
	int max_val = map[0][0];
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (max_val < map[i][j]) {
				max_val = map[i][j];
			}
		}
	}
	return max_val;
}

void solve(int cnt, vector<vector<int>> initial_map) {
	answer = max(answer, find_max(initial_map));
	/*	for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				cout << initial_map[i][j] << ' ';
			}
			cout << endl;
		}
		cout << cnt << endl;
		cout << "//////////////////////////////////////" << endl*/;
		if (cnt == 5) {
			return;
		}

		for (int i = 0; i < 4; i++) {
			vector<vector<int>> next_map = initial_map;
			if (i == 0) {
				move_up(next_map, N);
			}
			else if (i == 1) {
				move_down(next_map, N);
			}
			else if (i == 2) {
				move_left(next_map, N);
			}
			else {
				move_right(next_map, N);
			}

			bool check_flag = false;
			for (int i = 1; i <= N; i++) {
				for (int j = 1; j <= N; j++) {
					if (next_map[i][j] != initial_map[i][j]) {//다른 것이 발견되면 ok
						check_flag = true;
						break;
					}
				}
				if (check_flag) {
					break;
				}
			}

			if (!check_flag) {
				continue;
			}
			solve(cnt + 1, next_map);
		}

}

int main() {
	input();
	solve(0, v);
	cout << answer;
}