//#include <iostream>
//using namespace std;
//const int N = 1e5 + 10;
//int a[N];
//int main()
//{
//    int n; cin >> n;
//    for (int i = 1; i <= n; i++)cin >> a[i];
//    int minn, maxx;
//    for (int i = 1; i <= n / 2; i++)
//    {
//        minn = min(a[i], a[n + 1 - i]); maxx = max(a[i], a[n + 1 - i]);
//        if (minn <= min(a[i + 1], a[n - i]) && maxx >= max(a[i + 1], a[n - i]))continue;
//        else
//        {
//            cout << "NO";
//            return 0;
//        }
//    }
//    cout << "YES";
//    return 0;
//}