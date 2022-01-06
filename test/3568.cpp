#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;
string arr[3] = { "&", "[]", "*" };
stack<string> st;

string ty="";
string val = "";
string ty2 = "";
string s;
void input() {
	getline(cin, s);
}
void solve() {
	int i = 0;
	while (s[i] != ' ') {
		ty += s[i];
		i++;
	}
	i++;
	while(i<s.length()){
		
		while (i<s.length()&&('a' <= s[i] && 'z' >= s[i]) || ('A' <= s[i] && 'Z' >= s[i])) {
			val += s[i];
			i++;
		}
		
		while (i < s.length() && s[i] != ',') {
			if (s[i] == ';') break;
			ty2 += s[i];
			i++;
			
		}
		
		
		cout << ty;
		for (int j = ty2.length()-1; j >= 0; j--) {
			if (ty2[j] == ']') cout << '[';
			else if (ty2[j] == '[')cout << ']';
			else cout << ty2[j];
		}
		cout << ' ' + val + ';'<<endl;
		ty2 = "";
		val = "";
		i += 2;
	}
}
int main() {
	input();
	solve();
	return 0;
}