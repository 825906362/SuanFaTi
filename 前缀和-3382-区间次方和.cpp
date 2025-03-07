//#include <iostream>
//#include <cmath>
//using namespace std;
//
//const int N = 1e5 + 5;
//int a[N];
//int b[N];
//int prefix[N];
//// 给定长度为n的int数组a
//// m次查询
//// 每个查询包含l,r,k表示l~r之间所有元素的k次方的和
//// 需求：对每个查询输出一个答案，答案对10^9+7取模
////
//
//
//int main()
//{
//	prefix[0] = 0;
//	int n, m; cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	while (m--)
//	{
//		int r, l, k; cin >> r >> l >> k;
//		//b[i]存放a[i]的k次方
//		for (int i = 1; i <= n; i++) b[i] = pow(a[i], k);
//		//prefix[i]存放i之前所有的和
//		for (int i = 1; i <= n; i++) prefix[i] = prefix[i - 1] + b[i];
//		cout << prefix[l] - prefix[r - 1] << endl;
//	}
//
//	return 0;
//}