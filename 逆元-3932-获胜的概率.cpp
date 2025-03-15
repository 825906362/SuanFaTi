//#include <iostream>
//using namespace std;
//
//using ll = long long;
//const int p = 1e9 + 7;
//ll qmi(ll a, ll b)
//{
//	ll res = 1;
//	while (b)
//	{
//		if (b & 1) res = res * a % p;
//		a = a * a % p, b >>= 1;
//	}
//	return res;
//}
//ll inv(ll x) { return qmi(x, p - 2); }
//
//int main()
//{
//	ll n, k; cin >> n >> k;
//	if (k == 0)
//	{
//		cout << 1 << endl;
//		for (int i = 2; i <= n; i++)cout << 0 << endl;
//	}
//	else if (k & 1)
//	{
//		ll ans = inv(n / 2);
//		for (int i = 1; i <= n; i++)
//		{
//			if (i & 1)cout << 0 << endl;
//			else cout << ans << endl;
//		}
//	}
//	else
//	{
//		ll ans = inv((n+1) / 2);
//		for (int i = 1; i <= n; i++)
//		{
//			if (i & 1)cout << ans << endl;
//			else cout << 0 << endl;
//		}
//	}
//	return 0;
//}