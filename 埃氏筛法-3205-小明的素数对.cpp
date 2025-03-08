//#include<iostream>
//#include<vector>
//using namespace std;
//
//const int N = 1e5 + 5;
//bool vis[N];
//
//vector<int>primes;
//
//void init(int n)
//{
//	vis[0] = vis[1] = true;
//	for (int i = 2; i <= n; i++)
//		if (!vis[i])
//			for (int j = 2 * i; j <= n; j += i)
//				vis[j] = true;//ÉáÆúj
//	for (int i = 1; i <= n; i++)
//		if (!vis[i])primes.push_back(i);
//}
//
//int main()
//{
//	int n; cin >> n;
//	int ans = 0;
//	init(n);
//	
//	for (int i = 0; i < primes.size(); i++)
//		for (int j = i + 1; j < primes.size(); j++)
//			if (!vis[primes[j] - primes[i]])ans++;
//	cout << ans;
//	
//	return 0;
//}