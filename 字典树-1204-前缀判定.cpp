//#include<iostream>
//#include<cstring>
//using namespace std;
//
//// N个字符串==要插入N个字符串 M个询问==包含M个字符串要查询
//// 求t[i]是否在所有字符串的"前缀"中出现过
//// 要点:这题求的前缀,也就是没必要写cnt数组,只要出现过前缀就可以
//const int N = 2e6 + 9;
//int nex[N][27]; //nex[i][s[i]-'a']表示节点i出发,对应s[i]的下个节点
//int cnt[N]; //表示节点i结尾对应的字符串数量
//int idx = 2; //节点池:初始为2
//
//void insert(char s[])
//{
//	int n = strlen(s + 1); //n:字符串s的长度
//	int x = 1; //从节点1开始往下走
//	for (int i = 1; i <= n; i++)
//	{
//		//先检查是否存在s[i]的边
//		if (nex[x][s[i] - 'a'] == 0)
//			nex[x][s[i] - 'a'] = idx, idx++; //添加新点
//		x = nex[x][s[i] - 'a']; //更新x
//	}
//	cnt[x]++; //字符串数量+1
//}
//
//bool check(char s[]) //s:子串
//{
//	int n = strlen(s + 1); //n:子串的长度
//	int x = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		x = nex[x][s[i] - 'a'];
//	}
//	return x != 0;
//}
//
//
//int main()
//{
//	int n, m; cin >> n >> m;
//	while (n--)
//	{
//		char s[N];
//		cin >> s+1;
//		insert(s);
//	}
//	while (m--)
//	{
//		char t[N];
//		cin >> t + 1;
//		if (check(t))cout << "Y\n";
//		else cout << "N\n";
//	}
//	return 0;
//}