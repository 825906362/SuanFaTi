//#include <iostream>
//using namespace std;
//using ll = long long;
//// N个彩灯
//// 第i个亮度为ai
//// Q次操作
//// 每次操作使区间内亮度+x
//// 求Q次后每个彩灯亮度(如为负数输出0)
////
//const int N = 1e6 + 5;
//ll a[N];
//ll diff[N];
//
//
//int main()
//{
//	int n, q; cin >> n >> q;
//	a[0] = 0;
//	//输入ai
//	for (ll i = 1; i <= n; i++) cin >> a[i];
//	for (ll i = 1; i <= n; i++) diff[i] = a[i] - a[i - 1];
//	while (q--)
//	{
//		ll l, r, v; cin >> l >> r >> v;
//		//差分diff数组
//		diff[l] += v;
//		diff[r + 1] -= v;
//		//前缀和还原a数组
//		for (ll i = 1; i <= n; i++) a[i] = diff[i] + a[i - 1];
//	}
//	for (ll i = 1; i <= n; i++)
//		cout << max(0ll, a[i]) << " ";
//	return 0;
//}