//#include<iostream>
//#include<queue>
//using namespace std;
//
//using ll = long long;
//
//priority_queue< ll, vector<ll>, greater<ll> >pq;
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		ll x; cin >> x;
//		pq.push(x);
//	}
//	ll ans;
//	while(pq.size()>1)
//	{
//		ll x = pq.top(); pq.pop();
//		ll y = pq.top(); pq.pop();
//
//		ans += x + y;
//		pq.push(x + y);
//	}
//	cout<<ans;
//	return 0;
//}