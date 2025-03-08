//#include <iostream>
//#include<string.h>
//using namespace std;
//
//bool isprime(int n)
//{
//	if (n < 2)return false;
//	for (int i = 2; i <= n / i; i++)
//		if (n % i == 0)return false;
//	return true;
//}
//int qsum(int n)
//{
//	int sum = 0;
//	while (n)
//	{
//		sum += n % 10;
//		n /= 10;
//	}
//	return sum;
//}
//
//
//int main()
//{
//	int n; cin >> n;
//	int ans = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (isprime(qsum(i)))ans++;
//	}
//	cout << ans;
//	
//	return 0;
//}