//#include <iostream>
//using namespace std;
//using ll = long long;
//
//int a[100];//int����
//
//char ch[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
//
//����һ��N������S
//ת��ΪM�������
//
////˼·���Ƚ�N����ת����ʮ���ƣ��ٽ�ʮ����ת����M����
//
//
//
//int main()
//{
//	int T; cin >> T;//����T��
//	while (T--)
//	{
//		int N, M; cin >> N >> M;
//		string s; cin >> s;
//		//��s�ַ���ת���int a����
//		for (int i = 0; i < s.length(); i++)
//		{
//			if ('0' <= s[i] && s[i] <= '9')a[i + 1] = s[i] - '0';
//			else a[i + 1] = s[i] - 'A' + 10;
//		}
//		ll x = 0;
//		for (int i = 1; i <= s.length(); i++)
//		{
//			x = x * N + a[i];
//		}
//		//��ʱxΪʮ������
//
//		string ans;
//		while (x)
//		{
//			ans += ch[x % M];
//			x /= M;
//		}
//		reverse(ans.begin(), ans.end());
//		cout << ans << endl;
//	}
//
//	return 0;
//}