//#include <iostream>
//using namespace std;
//
//using ll = long long;
//const int p = 1e6 + 7;
//const int N = 105;
//ll a[N], dp[N][N];
//
//// 设dp[i][j]表示第i种花为止(可以不以第i种花结尾)
//// 到第j个为止为止(1~j都放了花)的情况下的总方案数
//// 
//
//
//int main()
//{
//	int n, m; cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//
//	dp[0][0] = 1;//初始化
//	
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j <= m; j++)
//		{
//			for (int k = 0; k <= a[i] && k <= j; k++)
//				dp[i][j] = (dp[i][j]+dp[i - 1][j - k]) % p;
//		}
//	}
//	cout << dp[n][m];
//	return 0;
//}