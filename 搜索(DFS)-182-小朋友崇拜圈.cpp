//// ��DFS�����Ļ�,������ʱ���(dfn)
//// ���߹��ĵط����һ��ʱ���(���ڼ����ߵ���)
//// ����������,ÿ�ο�ʼʱ������Сʱ���(mindfn)
//// ����ߵ��Ѿ��߹��ĵ�,�ͱ���ͣ��,Ȼ�����ʱ����ĺϷ������������ֵ
//#include<iostream>
//using namespace std;
//using ll = long long;
//const int N = 1e5 + 9;
//
//int n;
//int a[N], idx, dfn[N],mindfn;//idx��ʾʱ���
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
//		if (!dfn[i])//û�߹��ĵ��dfs
//		{
//			mindfn = idx + 1;//������Сʱ���
//			ans=max(ans,dfs(i));
//		}
//	}
//	cout << ans;
//	return 0;
//}