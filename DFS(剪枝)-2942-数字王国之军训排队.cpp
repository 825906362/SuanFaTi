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
////cnt��ʾ����������dfs������cnt�������������Ƿ���Գɹ�����
//bool dfs(int cnt, int dep)
//{
//	if (dep == n + 1)
//	{
//		//��鵱ǰ�����ĺϷ���
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
//	//ö��ÿ���������Ķ���
//	for (int i = 1; i <= cnt; i++)
//	{
//		v[i].push_back(a[dep]);
//		if (dfs(cnt, dep + 1))return true;
//		//�ָ��ֳ�
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