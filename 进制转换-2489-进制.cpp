//#include <iostream>
//using namespace std;
//using ll = long long;
//const int N = 50;
//int a[N];
//
//int main()
//{
//	string s = "2021ABCD";
//	for (int i = 0; i < s.length(); i++)
//	{
//		//将十六进制字符串转移到a数组中，并且将ABCDE转换成数字方便计算
//		if ('0' <= s[i] && s[i] <= '9')a[i + 1] = s[i] - '0';
//		else a[i+1] = s[i] - 'A' + 10;
//	}
//
//	ll x = 0;
//	for (int i = 1; i <= s.length(); i++)
//	{
//		x = x * 16 + a[i];
//	}
//	cout << x;
//	return 0;
//}