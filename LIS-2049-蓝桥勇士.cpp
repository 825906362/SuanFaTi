//#include <iostream>
//using namespace std;
//
//const int N = 1e3 + 5;
//// N~1005;可以使用O(N^2)算法，所以使用LIS
//// 求最长上升子序列
//int a[N];//每个对手的战力值
//int dp[N];//以i结尾的最长上升子序列的最大长度
//
//
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	for (int i = 1; i <= n; i++)
//	{
//		dp[i] = 1;
//		for (int j = 1; j < i; j++)
//		{
//			if (a[j] < a[i])dp[i] = max(dp[i], dp[j]+1);
//		}
//	}
//	int ans = 0;
//	for (int i = 1; i <= n; i++) ans = max(ans, dp[i]);//输出最大的dp[i]
//	
//	cout << ans << endl;
//	return 0;
//}