//#include <iostream>
//using namespace std;
//
//using ll = long long;
//const int p = 1e6 + 7;
//const int N = 105;
//ll a[N], dp[N][N];
//
//// ��dp[i][j]��ʾ��i�ֻ�Ϊֹ(���Բ��Ե�i�ֻ���β)
//// ����j��ΪֹΪֹ(1~j�����˻�)������µ��ܷ�����
//// 
//
//
//int main()
//{
//	int n, m; cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//
//	dp[0][0] = 1;//��ʼ��
//	
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j <= m; j++)
//		{
//			for (int k = 0; k <= a[i] && k <= j; k++)
//				dp[i][j] = (dp[i][j]+dp[i - 1][j - k]) % p;
//		}
//	}
//	cout << dp[n][m];
//	return 0;
//}