//#include<iostream>
//using namespace std;
//
//// ��n��̨�� m�����˵�̨��
//// dp[i]��ʾ�ߵ���i��̨�׵ķ�����
//// ״̬ת�Ʒ��̣�dp[i]=dp[i-1]+dp[i-2];dp[0]=1
//// ���iΪ������dp[i]=0
//// ��һ��Ͱ��¼��Щλ������
//// ��ǰ������£�������dp[n]
////
//
//using ll = long long;
//const int N = 1e5 + 9;
//const ll p = 1e9 + 7;
//ll dp[N];
//bool broken[N];
//
//int main()
//{
//	int n, m; cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int x; cin >> x;
//		broken[x] = true;
//	}
//	dp[0] = 1;//��ʼ���ʼ��dp״̬
//	if (broken[1] == 0)dp[1] = 1;//��ʼ���ڶ���dp,ʹ��dp����
//	for (int i = 2; i <= n; i++)
//	{
//		if (broken[i])continue;
//		dp[i] = (dp[i - 1] + dp[i - 2]) % p;//���ȡģ
//	}
//	cout << dp[n] << endl;
//	return 0;
//}