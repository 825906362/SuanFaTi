//#include<iostream>
//using namespace std;
//const int N = 1e6 + 9;
//int a[N];
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	for (int i = 2; i <= n; i++)
//	{
//		int val = a[i];
//		int j;
//		for (j = i; j > 1 && val < a[j - 1]; j--)
//		{
//			a[j] = a[j - 1];
//		}
//		a[j] = val;
//	}
//	for (int i = 1; i <= n; i++)cout << a[i] << " \n"[i == n];
//
//	return 0;
//}