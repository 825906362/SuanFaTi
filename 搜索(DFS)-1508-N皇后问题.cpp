//#include<iostream>
//using namespace std;
//const int N = 15;
//
//int n, ans;
//int vis[N][N];//表示被多少个皇后占用了
//
//void dfs(int dep)
//{
//	if (dep == n + 1)
//	{
//		ans++;//答案+1
//		return;//回溯到下一个支线
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (vis[dep][i])continue;//当前行i列不能选,则跳过本列
//
//		//修改状态
//		for (int _i = 1; _i <= n; _i++)vis[_i][i]++;//i当前列全部不能选
//		for (int _i = dep, _j = i; _i >= 1 && _j >= 1; --_i, --_j)vis[_i][_j]++;//米字行列都不能选
//		for (int _i = dep, _j = i; _i <= n && _j >= 1; ++_i, --_j)vis[_i][_j]++;
//		for (int _i = dep, _j = i; _i >= 1 && _j <= n; --_i, ++_j)vis[_i][_j]++;
//		for (int _i = dep, _j = i; _i <= n && _j <= n; ++_i, ++_j)vis[_i][_j]++;
//
//		dfs(dep + 1);
//
//		//恢复现场
//		for (int _i = 1; _i <= n; _i++)vis[_i][i]--;
//		for (int _i = dep, _j = i; _i >= 1 && _j >= 1; --_i, --_j)vis[_i][_j]--;
//		for (int _i = dep, _j = i; _i <= n && _j >= 1; ++_i, --_j)vis[_i][_j]--;
//		for (int _i = dep, _j = i; _i >= 1 && _j <= n; --_i, ++_j)vis[_i][_j]--;
//		for (int _i = dep, _j = i; _i <= n && _j <= n; ++_i, ++_j)vis[_i][_j]--;
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	dfs(1);
//	cout << ans << '\n';
//	return 0;
//}