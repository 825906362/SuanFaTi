//// 跑DFS求最大的环,可以用时间戳(dfn)
//// 将走过的地方标记一个时间戳(即第几步走到的)
//// 后续搜索中,每次开始时更新最小时间戳(mindfn)
//// 如果走到已经走过的点,就必须停下,然后根据时间戳的合法性来更新最大值
//#include<iostream>
//using namespace std;
//using ll = long long;
//const int N = 1e5 + 9;
//
//int n;
//int a[N], idx, dfn[N],mindfn;//idx表示时间戳
//
//int dfs(int x)
//{
//	dfn[x] = ++idx;
//
//	if (dfn[a[x]])
//	{
//		if (dfn[a[x]] >= mindfn)return dfn[x] - dfn[a[x]] + 1;
//		return 0;
//	}
//
//	return dfs(a[x]);
//}
//
//int main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	int ans = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (!dfn[i])//没走过的点才dfs
//		{
//			mindfn = idx + 1;//更新最小时间戳
//			ans=max(ans,dfs(i));
//		}
//	}
//	cout << ans;
//	return 0;
//}