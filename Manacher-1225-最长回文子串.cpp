//#include <iostream>
//#include<cstring>
//using namespace std;
//
////NҪ����Ŀ�ַ������ȵ�����(��Ϊ���#���ȷ�һ��)
//const int N = 1e6 + 9;
//char s[N]; //�ַ���S
//int p[N];  //p����:��¼�������Ӵ�����
//
//int main()
//{
//	cin >> s + 1;
//	int n = strlen(s + 1); //n:�ַ���S�ĳ���
//	for (int i = 2 * n + 1; i >= 1; i--)
//	{
//		if(i % 2 == 1) s[i] = '#';//������# ż����ֵ/2λ����
//		else s[i] = s[i / 2];
//	}
//	
//	int M = 0, R = 0;//M:��Mλ�������İ뾶 R:���뾶λ��
//	for (int i = 1; i <= 2 * n + 1; i++)
//	{
//		if (i < R)p[i] = min(R - i, p[2 * M - i]);
//		else p[i] = 1;
//
//		while (s[i + p[i]] == s[i - p[i]])p[i]++;
//		if (i + p[i] > R)M = i, R = i + p[i];
//	}
//
//	//����p�����������İ뾶��ֵ
//	int ans = 0;
//	for (int i = 1; i <= 2 * n + 1; i++)ans = max(ans, p[i] - 1);
//	cout << ans;
//	return 0;
//}