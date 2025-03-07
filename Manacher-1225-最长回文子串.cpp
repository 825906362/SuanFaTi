//#include <iostream>
//#include<cstring>
//using namespace std;
//
////N要开题目字符串长度的两倍(因为添加#长度翻一倍)
//const int N = 1e6 + 9;
//char s[N]; //字符串S
//int p[N];  //p数组:记录最大回文子串长度
//
//int main()
//{
//	cin >> s + 1;
//	int n = strlen(s + 1); //n:字符串S的长度
//	for (int i = 2 * n + 1; i >= 1; i--)
//	{
//		if(i % 2 == 1) s[i] = '#';//奇数添# 偶数赋值/2位的数
//		else s[i] = s[i / 2];
//	}
//	
//	int M = 0, R = 0;//M:第M位是最大回文半径 R:最大半径位置
//	for (int i = 1; i <= 2 * n + 1; i++)
//	{
//		if (i < R)p[i] = min(R - i, p[2 * M - i]);
//		else p[i] = 1;
//
//		while (s[i + p[i]] == s[i - p[i]])p[i]++;
//		if (i + p[i] > R)M = i, R = i + p[i];
//	}
//
//	//遍历p数组求最大回文半径数值
//	int ans = 0;
//	for (int i = 1; i <= 2 * n + 1; i++)ans = max(ans, p[i] - 1);
//	cout << ans;
//	return 0;
//}