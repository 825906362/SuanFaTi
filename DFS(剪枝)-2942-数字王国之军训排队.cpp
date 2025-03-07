//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//const int N = 15;
//int a[N], n;
//
//vector<int> v[N];
//
////cnt表示队伍数量，dfs返回在cnt个队伍的情况下是否可以成功分组
//bool dfs(int cnt, int dep)
//{
//	if (dep == n + 1)
//	{
//		//检查当前方案的合法性
//		for (int i = 1; i <= cnt; i++)
//		{
//			for (int j = 0; j < v[i].size(); j++)
//			{
//				for (int k = j + 1; k < v[i].size(); k++)
//				{
//					if (v[i][k] % v[i][j] == 0)return false;
//				}
//			}
//		}
//		return true;
//	}
//
//	//枚举每个人所属的队伍
//	for (int i = 1; i <= cnt; i++)
//	{
//		v[i].push_back(a[dep]);
//		if (dfs(cnt, dep + 1))return true;
//		//恢复现场
//		v[i].pop_back();
//	}
//	return false;
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	sort(a + 1, a + 1 + n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (dfs(i, 1))
//		{
//			cout << i << endl;
//			break;
//		}
//	}
//	return 0;
//}