//#include<iostream>
//using namespace std;
//using ll = long long;
//
//void qmi(ll n, ll m, ll p)
//{
//	ll ans = 1;
//	while (m)
//	{
//		if (m & 1)ans = ans * n % p;
//		n = n * n %p , m /= 2;//ָ������/=2������ƽ��
//	}
//	cout << ans << endl;
//}
//
//
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//	{
//		ll n, m, p; cin >> n >> m >> p;
//		qmi(n, m, p);
//	}
//
//	return 0;
//}