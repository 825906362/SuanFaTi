//#include <iostream>
//using namespace std;
//using ll = long long;
//
//int a[100];//int数组
//
//char ch[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
//
//给定一个N进制数S
//转换为M进制输出
//
////思路：先将N进制转换成十进制，再将十进制转换成M进制
//
//
//
//int main()
//{
//	int T; cin >> T;//测试T次
//	while (T--)
//	{
//		int N, M; cin >> N >> M;
//		string s; cin >> s;
//		//将s字符串转存进int a数组
//		for (int i = 0; i < s.length(); i++)
//		{
//			if ('0' <= s[i] && s[i] <= '9')a[i + 1] = s[i] - '0';
//			else a[i + 1] = s[i] - 'A' + 10;
//		}
//		ll x = 0;
//		for (int i = 1; i <= s.length(); i++)
//		{
//			x = x * N + a[i];
//		}
//		//此时x为十进制数
//
//		string ans;
//		while (x)
//		{
//			ans += ch[x % M];
//			x /= M;
//		}
//		reverse(ans.begin(), ans.end());
//		cout << ans << endl;
//	}
//
//	return 0;
//}