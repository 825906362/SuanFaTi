//#include <iostream>
//using namespace std;
//
//int gcd(int a, int b)
//{
//    return b == 0 ? a : gcd(b, a % b);
//}
////lcm求法：gcd*lcm=a*b
//int lcm(int a, int b)
//{
//    return a / gcd(a, b) * b;
//}
////先做除法，避免溢出
//
//int main()
//{
//    int a, b, t; cin >> t;
//    while (t--)
//    {
//        cin >> a >> b;
//        cout << gcd(a, b) << endl;
//    }
//    return 0;
//}