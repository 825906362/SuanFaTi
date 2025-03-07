//#include<iostream>
//using namespace std;
//
//// dp[i][j]表示第i行第j列元素往下走的所有路径当中最大的和
//// 状态转移方程：dp[i][j]=a[i][j]+max(dp[i+1][j],dp[i+1][j+1])
//// 因为要用下面的状态更新上面的，所以我们应该从下往上进行状态转移,最后输出dp[1][1]
//// 
////
//using ll = long long;
//const int N = 105;
//ll a[N][N], dp[N][N];
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= i; j++)cin >> a[i][j];
//
//	for (int i = n; i >= 1; i--)
//		for (int j = i; j >= 1; j--)
//			dp[i][j] = a[i][j] + max(dp[i + 1][j], dp[i + 1][j + 1]);
//	cout << dp[1][1] << endl;
//	return 0;
//}