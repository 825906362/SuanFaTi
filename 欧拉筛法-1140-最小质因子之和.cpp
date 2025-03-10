//#include <iostream>
//#include<vector>
//#include<bitset>
//using namespace std;
//using ll = long long;
//const int N = 2e7 + 5;
//
//bitset<N> vis;//vis中质数为false
//ll F[N];
//ll prefix[N];
//void euler(ll n)
//{
//	vector<ll> primes;
//	vis[0] = vis[1] = true;
//	for (ll i = 2; i <= n; i++)
//	{
//		if (!vis[i])primes.push_back(i),F[i]=i;
//		for (ll j = 0; j < primes.size() && i * primes[j] <= n; j++)
//		{
//			vis[i * primes[j]] = true;
//			F[i * primes[j]] = primes[j];//这里可以直接求得F
//			if (i % primes[j] == 0)break;
//		}
//	}
//}
//
//int main()
//{
//	ll t; cin >> t;
//	euler(2e7);
//	for (int i = 1; i <= 2e7; i++)prefix[i] = prefix[i - 1] + F[i];
//	while (t--)
//	{
//		ll k; cin >> k;
//		cout << prefix[k] << endl;
//	}
//	return 0;
//}