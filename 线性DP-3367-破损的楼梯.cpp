//#include<iostream>
//using namespace std;
//
//// 共n级台阶 m个坏了的台阶
//// dp[i]表示走到第i级台阶的方案数
//// 状态转移方程：dp[i]=dp[i-1]+dp[i-2];dp[0]=1
//// 如果i为破损，则dp[i]=0
//// 用一个桶记录哪些位置破损
//// 从前往后更新，最后输出dp[n]
////
//
//using ll = long long;
//const int N = 1e5 + 9;
//const ll p = 1e9 + 7;
//ll dp[N];
//bool broken[N];
//
//int main()
//{
//	int n, m; cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int x; cin >> x;
//		broken[x] = true;
//	}
//	dp[0] = 1;//初始化最开始的dp状态
//	if (broken[1] == 0)dp[1] = 1;//初始化第二个dp,使得dp正常
//	for (int i = 2; i <= n; i++)
//	{
//		if (broken[i])continue;
//		dp[i] = (dp[i - 1] + dp[i - 2]) % p;//最后取模
//	}
//	cout << dp[n] << endl;
//	return 0;
//}