//#include <iostream>
//using namespace std;
//
////��������ô�������
////Ҫ��1*2*..*100��Լ���ĸ���
////���Ǹ���Լ����������ɵ��������Լ������=ÿ�������ӵ�����+1�ĳ˻�
////������������1~100��������������
//const int N = 105;
//using ll = long long;
//int a[N];//a[i]����i��ָ���ĸ���
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