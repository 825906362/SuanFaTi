//#include <iostream>
//#include<algorithm>
//using namespace std;
//
//// N个位置,坐标是x[1~N]
//// M个树苗
//// 求max(最近距离)
//// 
//const int N = 1e5 + 10;
//int x[N];
//int n, m;
//
//int check(int mid)
//{
//	int res = 0;
//	for (int i = 1, lst = 0; i <= n; i++)
//	{
//		if (lst && x[i] - x[lst] < mid)continue;
//		res++, lst = i;
//	}
//	return res;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)cin >> x[i];
//	sort(x + 1, x + 1 + n);
//
//	int l = 0, r = 1e9 + 5;
//	while (l + 1 != r)
//	{
//		int mid = (l + r) / 2;
//		if (check(mid) >= m)l = mid;
//		else r = mid;
//	}
//	cout << l;
//	return 0;
//}