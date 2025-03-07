//#include <iostream>
//#include<algorithm>
//using namespace std;
//
//const int N = 1e6 + 9;
//char s[N];
//
//int main()
//{
//	int n, x; cin >> n >> x;
//	cin >> s + 1;//直接把字符串输入给字符数组
//	sort(s + 1, s + 1 + n);
//
//	if (s[1] == s[n])
//	{
//		for (int i = 1; i <= n / x + (n % x ? 1 : 0); i++)cout << s[1];
//	}
//	else if (s[1] == s[x])
//	{
//		for (int i = x; i <= n; i++)cout << s[i];
//	}
//	else cout << s[x];
//	return 0;
//}