//#include<iostream>
//#include<string>
//using namespace std;
//
//const int N = 1e5 + 5, M = 1e4 + 5;
//
//int main()
//{
//	char s[N], p[M];//s长串，p模式串
//	int next[M];//模式串的next数组
//	int n = strlen(s + 1), m = strlen(p + 1);//n长串的长度，m模式串的长度
//	next[0] = next[1] = 0;//初始化next数组
//	for (int i = 2, j = 0; i <= m; i++)
//	{
//		//不断匹配p[i]和p[j+1]
//		while (j != 0 && p[i] != p[j + 1])//
//			j = next[j];
//		if (p[i] == p[j + 1]) j++;//从while出来后要么j=0,要么p[i]==p[j+1] 如果匹配成功 则j后移
//		next[i] = j; //i如果匹配失败就回到j,因为此时p[1~j]=p[i-j+1~i]或j=0(回到最初的地方重新开始匹配)
//	}
//
//	//通过next数组进行匹配
//	for (int i = 1, j = 0; i <= n; i++)
//	{
//		while (j != 0 && s[i] != p[j + 1])
//			j = next[j];//失配时j->next[j]
//		if (s[i] == p[j + 1])j++;//成功匹配一个字符,则j向后移动
//		if (j == m)//成功匹配模式串
//		{
//			//进行匹配成功操作
//		}
//	}
//
//	return 0;
//}