//#include <iostream>
//using namespace std;
//using ll = long long;
//// N���ʵ�
//// ��i������Ϊai
//// Q�β���
//// ÿ�β���ʹ����������+x
//// ��Q�κ�ÿ���ʵ�����(��Ϊ�������0)
////
//const int N = 1e6 + 5;
//ll a[N];
//ll diff[N];
//
//
//int main()
//{
//	int n, q; cin >> n >> q;
//	a[0] = 0;
//	//����ai
//	for (ll i = 1; i <= n; i++) cin >> a[i];
//	for (ll i = 1; i <= n; i++) diff[i] = a[i] - a[i - 1];
//	while (q--)
//	{
//		ll l, r, v; cin >> l >> r >> v;
//		//���diff����
//		diff[l] += v;
//		diff[r + 1] -= v;
//		//ǰ׺�ͻ�ԭa����
//		for (ll i = 1; i <= n; i++) a[i] = diff[i] + a[i - 1];
//	}
//	for (ll i = 1; i <= n; i++)
//		cout << max(0ll, a[i]) << " ";
//	return 0;
//}