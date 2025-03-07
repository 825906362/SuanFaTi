//#include <iostream>
//using namespace std;
//
//const int N = 1e5 + 5;
//const int P = 998244353;
//int a[N],dp[N][70];
//
//
//int main()
//{
//	int n, x; cin >> n >> x;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	
//	//初始化dp数组
//	dp[0][0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j <= 64; j++)
//		{
//			dp[i][j] = (dp[i - 1][j] + dp[i - 1][j ^ a[i]])%P;
//		}
//	}
//
//	
//	cout << dp[n][x];
//	return 0;
//}