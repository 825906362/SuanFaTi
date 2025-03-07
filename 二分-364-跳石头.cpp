//#include<iostream>
//using namespace std;
//
//const int N = 5e4 + 10;
//int a[N];
//int L, n, m;
//
////返回当最短距离为mid时需要移除的最少石头数量(贪心法)
//int check(int mid)
//{
//	int res = 0, last = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i] - a[last] < mid)res++;
//		else last = i;
//	}
//	if (L - a[last] < mid)res++;
//	return res;
//}
//
//int main()
//{
//	cin >> L >> n >> m;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	int l = 0, r = 1e9 + 5;
//	while (l + 1 != r)
//	{
//		int mid = (l + r) / 2;
//		if (check(mid) <= m)l = mid;
//		else r = mid;
//	}
//	cout << l;
//	return 0;
//}