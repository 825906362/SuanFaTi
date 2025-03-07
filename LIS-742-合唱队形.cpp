//#include <iostream>
//using namespace std;
//
//using ll = long long;
//const int N = 105;
//int a[N], dpl[N], dpr[N];
//
//int main()
//{
//	int n; cin >> n;
//	//输入a数组
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	//正序构造dpl数组i:1~n;j:1~i
//	for (int i = 1; i <= n; i++)
//	{
//		dpl[i] = 1;
//		for (int j = 1; j < i; j++)if (a[j] < a[i])dpl[i] = max(dpl[i], dpl[j] + 1);
//	}
//	//倒序构造dpr数组i:n~i;j:i+1~n
//	for (int i = n; i >= 1; i--)
//	{
//		dpr[i] = 1;
//		for (int j = i + 1; j <= n; j++)if (a[j] < a[i])dpr[i] = max(dpr[i], dpr[j] + 1);
//	}
//	int ans = n;
//	for (int i = 1; i <= n; i++)ans = min(ans, n - (dpl[i] + dpr[i] - 1));
//	cout << ans << endl;
//	return 0;
//}