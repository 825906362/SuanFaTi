//#include <iostream>
//#include <cmath>
//using namespace std;
//
//const int N = 1e5 + 5;
//int a[N];
//int b[N];
//int prefix[N];
//// ��������Ϊn��int����a
//// m�β�ѯ
//// ÿ����ѯ����l,r,k��ʾl~r֮������Ԫ�ص�k�η��ĺ�
//// ���󣺶�ÿ����ѯ���һ���𰸣��𰸶�10^9+7ȡģ
////
//
//
//int main()
//{
//	prefix[0] = 0;
//	int n, m; cin >> n >> m;
//	for (int i = 1; i <= n; i++) cin >> a[i];
//	while (m--)
//	{
//		int r, l, k; cin >> r >> l >> k;
//		//b[i]���a[i]��k�η�
//		for (int i = 1; i <= n; i++) b[i] = pow(a[i], k);
//		//prefix[i]���i֮ǰ���еĺ�
//		for (int i = 1; i <= n; i++) prefix[i] = prefix[i - 1] + b[i];
//		cout << prefix[l] - prefix[r - 1] << endl;
//	}
//
//	return 0;
//}