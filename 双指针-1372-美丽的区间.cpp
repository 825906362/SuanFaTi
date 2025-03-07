//#include <iostream>
//using namespace std;
//
//// 长度为n的区间
//// 一个常数S
//// 一个连续区间和>=S则满足美丽区间
//// 求最短的美丽区间
////
//const int N = 1e5 + 5;
//int a[N];
//
//int main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//
//	int n, S; cin >> n >> S;
//	
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	
//	int ans = n + 1;
//
//	for(int l=1,r=0,sum=0;l<=n;l++)
//	{
//		//考虑移动j,既j++
//		while (l > r || (sum < S && r + 1 <= n))r++, sum += a[r];
//
//		if (sum >= S)ans = min(ans, r - l + 1);
//		sum -= a[l];
//	}
//	cout << (ans > n ? 0 : ans);
//
//	return 0;
//}