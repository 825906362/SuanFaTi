//#include<iostream>
//#include<cstring>
//using namespace std;
//
//// N���ַ���==Ҫ����N���ַ��� M��ѯ��==����M���ַ���Ҫ��ѯ
//// ��t[i]�Ƿ��������ַ�����"ǰ׺"�г��ֹ�
//// Ҫ��:�������ǰ׺,Ҳ����û��Ҫдcnt����,ֻҪ���ֹ�ǰ׺�Ϳ���
//const int N = 2e6 + 9;
//int nex[N][27]; //nex[i][s[i]-'a']��ʾ�ڵ�i����,��Ӧs[i]���¸��ڵ�
//int cnt[N]; //��ʾ�ڵ�i��β��Ӧ���ַ�������
//int idx = 2; //�ڵ��:��ʼΪ2
//
//void insert(char s[])
//{
//	int n = strlen(s + 1); //n:�ַ���s�ĳ���
//	int x = 1; //�ӽڵ�1��ʼ������
//	for (int i = 1; i <= n; i++)
//	{
//		//�ȼ���Ƿ����s[i]�ı�
//		if (nex[x][s[i] - 'a'] == 0)
//			nex[x][s[i] - 'a'] = idx, idx++; //����µ�
//		x = nex[x][s[i] - 'a']; //����x
//	}
//	cnt[x]++; //�ַ�������+1
//}
//
//bool check(char s[]) //s:�Ӵ�
//{
//	int n = strlen(s + 1); //n:�Ӵ��ĳ���
//	int x = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		x = nex[x][s[i] - 'a'];
//	}
//	return x != 0;
//}
//
//
//int main()
//{
//	int n, m; cin >> n >> m;
//	while (n--)
//	{
//		char s[N];
//		cin >> s+1;
//		insert(s);
//	}
//	while (m--)
//	{
//		char t[N];
//		cin >> t + 1;
//		if (check(t))cout << "Y\n";
//		else cout << "N\n";
//	}
//	return 0;
//}