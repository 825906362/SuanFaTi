//#include<iostream>
//using namespace std;
//
//// 设状态dp[i]表示以位置i“结尾”的方案总数
//// 状态转移方程为：dp[i]=dp[j](j=1~(i-k-1))
//// 但是直接去求和肯定会超时
//// 所以需要利用前缀和来优化时间复杂度
//// 注意取模
//const int p= 1e9 + 7;
//const int N = 1e6 + 5;
//long long dp[N],prefix[N];
//
//int main()
//{
//	int n, k; cin >> n >> k;
//	dp[0] = prefix[0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i - k - 1 <= 0)dp[i] = 1;
//		else {
//			dp[i] = prefix[i - k - 1];
//		}
//		prefix[i] = (prefix[i - 1] + dp[i]) % p;
//	}
//	cout << prefix[n];
//	return 0;
//}