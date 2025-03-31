//#include <iostream>
//using namespace std;
//using ll=long long;
//// 0/6/9--->1
//// 8--->2
//// else--->0
//int value[10] = { 1,0,0,0,0,0,1,0,2,1 };
//
//int f(int x) {
//	ll sum;
//	while (x) {
//		sum += value[(x % 10)];
//		x /= 10;
//	}
//	cout << sum << endl;
//	return sum;
//}
//
//int main()
//{
//	int a, b; cin >> a >> b;
//	int maxBit=-1,maxValue = -1;
//	int v;
//	for (int i = a; i <= b; i++)
//	{
//		v=f(i);
//		if (v > maxValue)maxValue = v, maxBit = i;
//	}
//	cout << maxBit;
//	return 0;
//}