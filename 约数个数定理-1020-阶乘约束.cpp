//#include <iostream>
//using namespace std;
//
////本题必须用代码来做
////要求1*2*..*100的约数的个数
////我们根据约数个数定理可得这个数的约束个数=每个质因子的质数+1的乘积
////所以我们先求1~100所有数的质因子
//const int N = 105;
//using ll = long long;
//int a[N];//a[i]保存i的指数的个数
//
//void f(int n)
//{
//	for (int i = 2; i <= n / i; i++)
//	{
//		if (n % i != 0)continue;
//		while (n % i == 0)
//			a[i]++, n /= i;
//	}
//	if (n > 1)a[n]++;
//}
//
//
//int main()
//{
//	int n = 100;
//	for (int i = 1; i <= n; i++) f(i);
//	a[1] = 1;
//	ll ans = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		ans = (ans * (a[i] + 1));
//	}
//	cout << ans;
//	return 0;
//}