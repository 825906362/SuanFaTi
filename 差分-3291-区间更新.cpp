//#include <iostream>
//using namespace std;
//
////长度为n的数组a[1-n]
////同时给定m个操作
//// 每个操作有三个整型数据x,y,z
//// 给数组中x-y之间所有元素加上z
////
//const int N = 1e5 + 10;
//int a[N];
//int diff[N];
//
//void solve(int n, int m)
//{
//	//输入a数组
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	//预处理差分数组
//	for (int i = 1; i <= n; i++)diff[i] = a[i] - a[i - 1];
//	//m次修改
//	while (m--)
//	{
//		int l, r, v; cin >> l >> r >> v;
//		//处理差分数组
//		diff[l] += v, diff[r + 1] -= v;
//	}
//
//	//前缀和还原
//	for (int i = 1; i <= n; i++)a[i] = a[i - 1] + diff[i];
//	//输出结果
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