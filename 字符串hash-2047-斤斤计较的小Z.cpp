//#include <iostream>
//#include <cstring>
//using namespace std;
//
//// S1:���� S2:ģʽ��
//// ��:S2��S1�г����˶��ٴ�
//// ����:
////	1.�����S2����hashֵ
////	2.ö��S1��S2���ȴ�������hashֵ,�����cnt+1
//
//const int N = 1e6 + 5, P = 131;
//typedef unsigned long long ULL;
//ULL h1[N], h2[N], p[N]; //h�����ʾǰ׺hash���� ; p�����¼131��p����
//
//char str1[N], str2[N];//str1Ϊ����,str2Ϊģʽ��
//
//ULL get_hash(ULL h[], int l, int r)
//{
//	return h[r] - h[l - 1] * p[r - l + 1]; //��ʽ����Ӵ�hashֵ
//}
//
//int main()
//{
//	cin >> str2 + 1; int m = strlen(str2+1); //���±�1��ʼ����
//	cin >> str1 + 1; int n = strlen(str1+1);
//
//	p[0] = 1; h1[0] = h2[0] = 0;//��ʼ��p���� �� h����
//
//	for (int i = 1; i<=n; i++)
//	{
//		p[i] = p[i - 1] * P; //ѭ��n�μ���p����
//		h1[i] = h1[i - 1] * P + (int)str1[i]; //ѭ��n�μ���h1����
//	}
//
//	for (int i = 1; i <= m; i++)
//	{
//		h2[i] = h2[i - 1] * P + (int)str2[i]; //ѭ��m�μ���h2����
//	}
//
//	int cnt = 0; //cnt��ʾƥ��ɹ��Ĵ���
//
//	for (int i = 1; i  + m - 1 <= n; i++) 
//	{
//		if (get_hash(h2, 1, m) == get_hash(h1, i, i + m-1)) //ǰһ����ʾģʽ����hashֵ; ��һ����ʾ������[i~i+m-1]��hashֵ
//			cnt++;
//	}
//	cout << cnt;
//	return 0;
//}