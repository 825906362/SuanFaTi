//#include<iostream>
//#include <vector>
//
//using namespace std;
//
//const int N = 1e3 + 5;
//int a[N], b[N];
//int dp[N][N];
//
////	求最长公共子序列长度
////	
//
//int main()
//{
//	int n, m; cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	for (int i = 1; i <= m; i++) cin >> b[i];//输出a,b数组
//	if (a[1] == b[1])dp[1][1] = 1;
//	else dp[1][1] = 0;
//	//初始化dp数组
//	for (int i = 2; i <= n; i++)//初始化dp[1][1~n]
//	{
//		if (b[1] == a[i])dp[1][i] = dp[1][i - 1] + 1;
//		else dp[1][i] = dp[1][i - 1];
//	}
//
//	for (int i = 2; i <= m; i++)//初始化dp[1~m][1]
//	{
//		if (a[1] == b[i])dp[i][1] = dp[i - 1][1] + 1;
//		else dp[i][1] = dp[i - 1][1];
//	}
//
//	//递推dp数组
//	for (int i = 2; i <= m; i++)
//		for (int j = 2; j <= n; j++)
//			if (a[j] == b[i])dp[i][j] = dp[i - 1][j - 1] + 1;
//			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//	
//	for (int i = 1; i <= m; i++)
//		for (int j = 1; j <= n; j++)
//			cout << dp[i][j] << " \n"[j==n];
//
//	vector<int>v;
//	int x = n, y = m;
//	while (x && y)
//	{
//		if (a[x] == b[y])
//		{
//			v.push_back(a[x]);//只有相等的时候才将字符push进答案
//			x--, y--;
//		}else if (dp[x - 1][y] < dp[x][y - 1]) x--;
//		else y--;
//	}
//	reverse(v.begin(), v.end());//反转得到答案
//
//	for (const auto& i : v)cout << i << " ";
//	return 0;
//}