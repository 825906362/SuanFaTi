//#include <iostream>
//#include <cstring>
//using namespace std;
//
//// S1:主串 S2:模式串
//// 求:S2在S1中出现了多少次
//// 方法:
////	1.先求出S2串的hash值
////	2.枚举S1中S2长度串的所以hash值,相等则cnt+1
//
//const int N = 1e6 + 5, P = 131;
//typedef unsigned long long ULL;
//ULL h1[N], h2[N], p[N]; //h数组表示前缀hash数组 ; p数组记录131的p次幂
//
//char str1[N], str2[N];//str1为主串,str2为模式串
//
//ULL get_hash(ULL h[], int l, int r)
//{
//	return h[r] - h[l - 1] * p[r - l + 1]; //公式求出子串hash值
//}
//
//int main()
//{
//	cin >> str2 + 1; int m = strlen(str2+1); //从下标1开始输入
//	cin >> str1 + 1; int n = strlen(str1+1);
//
//	p[0] = 1; h1[0] = h2[0] = 0;//初始化p数组 和 h数组
//
//	for (int i = 1; i<=n; i++)
//	{
//		p[i] = p[i - 1] * P; //循环n次计算p数组
//		h1[i] = h1[i - 1] * P + (int)str1[i]; //循环n次计算h1数组
//	}
//
//	for (int i = 1; i <= m; i++)
//	{
//		h2[i] = h2[i - 1] * P + (int)str2[i]; //循环m次计算h2数组
//	}
//
//	int cnt = 0; //cnt表示匹配成功的次数
//
//	for (int i = 1; i  + m - 1 <= n; i++) 
//	{
//		if (get_hash(h2, 1, m) == get_hash(h1, i, i + m-1)) //前一个表示模式串的hash值; 后一个表示主串从[i~i+m-1]的hash值
//			cnt++;
//	}
//	cout << cnt;
//	return 0;
//}