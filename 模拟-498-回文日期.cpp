//#include <iostream>
//#include<string>
//using namespace std;
//
//// 1.int转换为指定位数的string函数
//string i2s(int x,int w)
//{
//	string res;
//	while (x)res += (x % 10) + '0', x /= 10;
//	while (res.length() < w)res += '0';
//	reverse(res.begin(), res.end());
//	return res;
//}
//// 2.string转换为int的函数
//int s2i(string s)
//{
//	int res = 0;
//	for (auto i : s)res = res * 10 + i - '0';
//	return res;
//}
//// 3.判断闰年的函数
//bool isLeapYear(int year)
//{
//	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
//}
//// 4.判断日期是否合法的函数
//bool isok(int year, int mouth, int day)
//{
//	int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	if(isLeapYear(year))days[2]=29;
//	return day <= days[mouth];
//}
//// 5.判断字符串是否是回文的函数
//bool isPa(string s)
//{
//	for (int i = 0; i < s.length() / 2; i++)
//	{
//		if (s[i] != s[s.length() - 1 - i])return false;
//	}
//	return true;
//}
//// 6.判断字符串是否是ABABBABA形回文的函数
//bool isPa2(string s)
//{
//	if (!isPa(s))return false;
//	return s[0] == s[2] && s[1] == s[3];
//}
//
//int main()
//{
//	string s; cin >> s;
//	int year = s2i(s.substr(0, 4)), mouth = s2i(s.substr(4, 2)), day = s2i(s.substr(6, 2));
//
//	bool ans1 = false, ans2 = false;
//
//	for (int i = year; i <= 9999; i++)
//	{
//		for (int j = mouth; j <= 12; j++)
//		{
//			if (i == year && j < mouth)continue;
//			for (int k = 1; k <= 31; k++)
//			{
//				if (i == year && j == mouth && k<=day)continue;
//
//				if (!isok(i, j, k))continue;
//				string date = i2s(i,4) + i2s(j,2) + i2s(k,2);
//				if (!ans1 && isPa(date))
//				{
//					cout << date << '\n';
//					ans1 = true;
//				}
//				if (!ans2 && isPa2(date))
//				{
//					cout << date << '\n';
//					ans1 = true;
//				}
//			}
//		}
//	}
//	return 0;
//}