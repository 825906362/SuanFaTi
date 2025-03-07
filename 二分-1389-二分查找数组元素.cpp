//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int data[200];
//	for (int i = 0; i < 200; i ++) data[i] = 4 * i + 6;
//
//	int x; cin >> x;
//	int l = -1, r = 199;
//	while (l + 1 != r)
//	{
//		int mid = (l + r) /2;
//		if (x <= data[mid])r = mid;
//		else l = mid;
//	}
//	cout << r;
//	return 0;
//}