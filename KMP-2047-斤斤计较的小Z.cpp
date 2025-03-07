//#include <iostream>
//#include <string>
//using namespace std;
//
//// S1:模式串 S2：主串
//// 长度限制：1e6+5 && 字符为大写或小写字母
//// 求：出现了多少次 strlen
//const int N = 1e6 + 5;
//char s[N], p[N];
//
//int main()
//{
//	int cnt = 0;
//	int next[N];
//	next[0] = next[1] = 0;
//	cin >> p; cin >> s;
//	int n = strlen(s + 1), m = strlen(p + 1);
//	for (int i = 2, j = 0; i <= m; i++)
//	{
//		while (j != 0 && p[i] != p[j + 1])//失配
//			j = next[j];
//		if (p[i] == p[j + 1])j++;
//		next[i] = j;
//	}
//
//	for (int i = 1, j = 0; i <= n; i++)
//	{
//		while (j != 0 && s[i] != p[j + 1])
//			j = next[j];
//		if (s[i] == p[j + 1])j++;
//		if (j == m)cnt++;
//	}
//	cout << cnt;
//	return 0;
//}