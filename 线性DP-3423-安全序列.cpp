//#include<iostream>
//using namespace std;
//
//// ��״̬dp[i]��ʾ��λ��i����β���ķ�������
//// ״̬ת�Ʒ���Ϊ��dp[i]=dp[j](j=1~(i-k-1))
//// ����ֱ��ȥ��Ϳ϶��ᳬʱ
//// ������Ҫ����ǰ׺�����Ż�ʱ�临�Ӷ�
//// ע��ȡģ
//const int p= 1e9 + 7;
//const int N = 1e6 + 5;
//long long dp[N],prefix[N];
//
//int main()
//{
//	int n, k; cin >> n >> k;
//	dp[0] = prefix[0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i - k - 1 <= 0)dp[i] = 1;
//		else {
//			dp[i] = prefix[i - k - 1];
//		}
//		prefix[i] = (prefix[i - 1] + dp[i]) % p;
//	}
//	cout << prefix[n];
//	return 0;
//}