//#include <iostream>
//using namespace std;
//
//const int N = 150;
//int mp[N][N] = { -1 };
//
//int main()
//{
//	for (int i = 1; i < N; i++) {//��ʼ������
//		for (int j = 1; j < N; j++) {
//			mp[i][j] = -1;
//		}
//	}
//
//	int n, m; cin >> n >> m;//n��m��
//	int t, r, c; cin >> t;//t��ˮ��
//	int k;//ѭ��k����
//	while (t--){
//		cin >> r >> c;
//		mp[r][c] = 0;//����ˮ��
//	}
//
//	cin >> k;
//	for (int x = 1; x <= k;x++) {//ѭ��k����
//		for (int i = 1; i <= n; i++){//����i��
//			for (int j = 1; j <= m; j++){//����j��
//				if (mp[i][j]==x-1) {//ֻ����һ���Ӹ��µĸ���,����չ
//					mp[max(1,i-1)][j] = 1;//ע�ⲻҪ"Խ��"
//					mp[i][max(1,j-1)] = 1;
//					mp[i][min(j+1,m)] = 1;
//					mp[min(i+1,n)][j] = 1;
//				}
//			}
//		}
//	}
//	int ans = 0;
//	for (int i = 1; i <= n; i++) {//������ȫ��,�ҵ�����ˮ����,ans++
//		for (int j = 1; j <= m; j++) {
//			if (mp[i][j] > -1)ans++;
//		}
//	}
//	cout << ans;
//	return 0;
//}