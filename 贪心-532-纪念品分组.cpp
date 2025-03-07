//#include <iostream>
//#include<algorithm>
//using namespace std;
//
//const int N = 30005;
//int a[N];
//
//int main()
//{
//	int w, n; cin >> w >> n;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	sort(a + 1, a + 1 + n);
//	int ans = 0;
//	int* p=a+1, * q=a+n;
//	while (p <= q)
//	{
//		if (p == q)
//		{
//			ans++;
//			break;
//		}
//		else if ( (*q + *p) <= w )
//		{
//			ans++; q--; p++;
//		}
//		else
//		{
//			ans++; q--; 
//		}
//	}
//	cout << ans;
//	return 0;
//}