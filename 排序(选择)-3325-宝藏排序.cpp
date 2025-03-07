//#include<iostream>
//using namespace std;
//const int N = 1e6 + 9;
//int a[N];
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//
//	for (int i = n; i >= 1; i--) {
//		int max_id = 1;
//		for (int j = 1; j <= i; j++) {
//			
//			if (a[j] > a[max_id])max_id = j;
//		}
//		swap(a[max_id], a[i]);
//	}
//	for (int i = 1; i <= n; i++)cout << a[i] << " \n"[i == n];
//
//	return 0;
//}