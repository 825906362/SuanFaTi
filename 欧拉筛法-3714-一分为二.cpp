//#include<iostream>
//#include<vector>
//using namespace std;
//
//const int N = 1e6 + 5;
//vector<bool> iprime(N, true);
//
//vector<int> v_prime;
//int pre_iprime[N];
//
//void OuLa(int n)
//{
//    iprime[0] = iprime[1] = false; // 0��1��������
//    for (int i = 2; i <= n; i++)
//    {
//        if (iprime[i] == true) v_prime.push_back(i); // ��������������
//        for (int j = 0; j < v_prime.size() && i * v_prime[j] <= n; j++)
//        {
//            iprime[i * v_prime[j]] = false; // ���˻��������ɸ��
//            if (i % v_prime[j] == 0) break; // ���i�ܱ�����������˵����ͷ�ˣ�break
//        }
//    }
//}
//
//void pre_OuLa(int n)
//{
//    pre_iprime[0] = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        if (iprime[i] && iprime[i / 2])
//            pre_iprime[i] = pre_iprime[i - 1] + 1;
//        else
//            pre_iprime[i] = pre_iprime[i - 1];
//    }
//}
//
//int main()
//{
//    int n, q; cin >> n >> q;
//    OuLa(n);
//    pre_OuLa(n);
//    while (q--)
//    {
//        int l, r; cin >> l >> r;
//        cout << pre_iprime[r] - pre_iprime[l - 1] << endl;
//    }
//    return 0;
//}