//#include<iostream>
//using namespace std;
//
//const int N = 1e5 + 5;
//typedef long long ll;
//ll a[2][N];
//ll dp[2][N];
//
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 0; i <= 1; i++)
//		for (int j = 1; j <= n; j++)
//			cin >> a[i][j];
//	
//	for (int j = n; j >= 1; --j)
//	{
//		for (int i = 0; i <= 1; ++i)//从后往前推
//		{
//			if (j == n)dp[i][j] = a[i][j];
//			else if (j + 1 == n)dp[i][j] = a[i][j] + a[!i][j + 1];//初始化dp
//			else {
//				dp[i][j] = a[i][j] + max(dp[!i][j + 1], dp[!i][j + 2]);//构造dp公式
//			}
//		}
//	}
//	cout << max(dp[0][1], dp[1][1]);
//	return 0;
//}