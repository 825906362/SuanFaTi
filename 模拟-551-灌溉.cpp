//#include <iostream>
//using namespace std;
//
//const int N = 150;
//int mp[N][N] = { -1 };
//
//int main()
//{
//	for (int i = 1; i < N; i++) {//初始化数组
//		for (int j = 1; j < N; j++) {
//			mp[i][j] = -1;
//		}
//	}
//
//	int n, m; cin >> n >> m;//n行m列
//	int t, r, c; cin >> t;//t个水管
//	int k;//循环k分钟
//	while (t--){
//		cin >> r >> c;
//		mp[r][c] = 0;//设置水管
//	}
//
//	cin >> k;
//	for (int x = 1; x <= k;x++) {//循环k分钟
//		for (int i = 1; i <= n; i++){//遍历i行
//			for (int j = 1; j <= m; j++){//遍历j列
//				if (mp[i][j]==x-1) {//只看上一分钟更新的格子,并扩展
//					mp[max(1,i-1)][j] = 1;//注意不要"越界"
//					mp[i][max(1,j-1)] = 1;
//					mp[i][min(j+1,m)] = 1;
//					mp[min(i+1,n)][j] = 1;
//				}
//			}
//		}
//	}
//	int ans = 0;
//	for (int i = 1; i <= n; i++) {//最后遍历全部,找到所有水格子,ans++
//		for (int j = 1; j <= m; j++) {
//			if (mp[i][j] > -1)ans++;
//		}
//	}
//	cout << ans;
//	return 0;
//}