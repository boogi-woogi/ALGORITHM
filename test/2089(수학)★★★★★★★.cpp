//#include<iostream>
//using namespace std;
//#define endl "\n"
//#define div -2
//long long n;
//
//void find(long long a) {
//
//	if (a == 1) // 1�̸� ���
//	{
//		cout << 1;
//		return;
//	}
//
//	if (a < 0 && a % div == -1) { // ������ ������ ���� �� �������� -1 �� ��� �������� -1�� �ƴ� 1�� �ǵ��� ��� �������� ��������� �Ѵ�.
//		a /= div;
//		a += 1;
//		find(a);
//		cout << 1;
//	}
//
//	else { // �� ���� �Ϲ����� ���
//		long long temp = a % div;
//		a /= div;
//		find(a);
//		cout << temp;
//	}
//
//}
//
//int main() {
//
//	ios::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> n;
//
//	if (n == 0) // �� �κж����� ���ð��� ���. �� Ǯ���� �������� ����. 0�� ����ó�� ������Ѵ�.
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//
//	find(n);
//
//	cout << endl;
//
//	return 0;
//}