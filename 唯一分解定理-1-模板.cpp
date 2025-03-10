//#include<iostream>
//#include<vector>
//using namespace std;
//const int N = 2e5 + 9;
//
//vector<pair<int,int>>v;	//{num,cnt}
//
//int main()
//{
//	int x; cin >> x;
//	//枚举所有可能的质因子
//	for (int i = 2; i <= x / i; i++)
//	{
//		//如果不能整除直接跳过
//		if (x % i)continue;
//		//如果可以整除，那么必然是一个质因子（从小到大枚举的特性决定）
//		//cnt表示当前这个质因子i的指数
//		int cnt = 0;
//		//一直除，直到除干净
//		while (x % i == 0)cnt++, x /= i;
//		v.push_back({ i, cnt });
//	}
//	if (x > 1)v.push_back({ x,1 });
//	for (auto i : v)cout << i.first << " " << i.second << "\n";
//	return 0;
//}
//
