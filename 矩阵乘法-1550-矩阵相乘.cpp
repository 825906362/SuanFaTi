//#include<iostream>
//using namespace std;
//const int n = 105;
//int a[n][n], b[n][n], c[n][n];
//int main()
//{
//    int N, M, K; 
//    cin >> N >> M >> K;
//    for (int i = 1; i <= N; i++)
//    {
//        for (int j = 1; j <= M; j++)
//        {
//            cin >> a[i][j];
//        }
//    }
//    for (int i = 1; i <= M; i++)
//    {
//        for (int j = 1; j <= K; j++)
//        {
//            cin >> b[i][j];
//        }
//    }
//    for (int i = 1; i <= N; i++)
//    {
//        for (int j = 1; j <= K; j++)
//        {
//            for (int t = 1; t <= M; t++)
//            {
//                c[i][j] += a[i][t] * b[t][j];
//            }
//            cout << c[i][j] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}