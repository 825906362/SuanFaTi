//#include <iostream>
//using namespace std;
//using ll = long long;
//const int N = 2005;
//// n����+һ������m
//// Ȧ��һ�������Ӵ�,������k����Ҫ>=m
////
//int  a[N];
//int main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	int n, k, m;	cin >> n >> m >> k;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	int ans = 0;
//	for (int l = 1, r = 0, sum = 0; l <= n; l++)
//	{
//		//�����ƶ�r,r++
//		while (l > r || (sum < k && r + 1 <= n)) {
//			r++;
//			if (a[r] >= m)sum++; }
//		if (sum >= k)ans += n - r + 1;
//		sum -= (a[l] >= m);
//	}
//	cout << ans;
//	return 0;
//}