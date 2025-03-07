//#include <iostream>
//using namespace std;
//const int N = 1e5 + 9;
//
//int a[N], prexor[N], cnt[N];
//
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	for (int i = 1; i <= n; i++)prexor[i] = prexor[i - 1] ^ a[i];
//	cnt[0] = 1;
//	int ans = n * (n + 1) / 2;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j <= 200; j++)
//		{
//			int sq = j * j;
//			ans -= cnt[prexor[i] ^ sq];
//		}
//		cnt[prexor[i]]++;
//	}
//	cout << ans;
//	return 0;
//}