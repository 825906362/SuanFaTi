//#include<iostream>
//using namespace std;
//const int N = 15;
//
//int n, ans;
//int vis[N][N];//��ʾ�����ٸ��ʺ�ռ����
//
//void dfs(int dep)
//{
//	if (dep == n + 1)
//	{
//		ans++;//��+1
//		return;//���ݵ���һ��֧��
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (vis[dep][i])continue;//��ǰ��i�в���ѡ,����������
//
//		//�޸�״̬
//		for (int _i = 1; _i <= n; _i++)vis[_i][i]++;//i��ǰ��ȫ������ѡ
//		for (int _i = dep, _j = i; _i >= 1 && _j >= 1; --_i, --_j)vis[_i][_j]++;//�������ж�����ѡ
//		for (int _i = dep, _j = i; _i <= n && _j >= 1; ++_i, --_j)vis[_i][_j]++;
//		for (int _i = dep, _j = i; _i >= 1 && _j <= n; --_i, ++_j)vis[_i][_j]++;
//		for (int _i = dep, _j = i; _i <= n && _j <= n; ++_i, ++_j)vis[_i][_j]++;
//
//		dfs(dep + 1);
//
//		//�ָ��ֳ�
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