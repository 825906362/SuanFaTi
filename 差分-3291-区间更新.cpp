//#include <iostream>
//using namespace std;
//
////����Ϊn������a[1-n]
////ͬʱ����m������
//// ÿ��������������������x,y,z
//// ��������x-y֮������Ԫ�ؼ���z
////
//const int N = 1e5 + 10;
//int a[N];
//int diff[N];
//
//void solve(int n, int m)
//{
//	//����a����
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	//Ԥ����������
//	for (int i = 1; i <= n; i++)diff[i] = a[i] - a[i - 1];
//	//m���޸�
//	while (m--)
//	{
//		int l, r, v; cin >> l >> r >> v;
//		//����������
//		diff[l] += v, diff[r + 1] -= v;
//	}
//
//	//ǰ׺�ͻ�ԭ
//	for (int i = 1; i <= n; i++)a[i] = a[i - 1] + diff[i];
//	//������
//	for (int i = 1; i <= n; i++)cout << a[i] << " \n"[i==n];
//	cout << endl;
//}
//
//int main()
//{
//	int n, m;
//	while (cin >> n >> m)solve(n, m);
//	return 0;
//}