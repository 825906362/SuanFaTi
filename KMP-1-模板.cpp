//#include<iostream>
//#include<string>
//using namespace std;
//
//const int N = 1e5 + 5, M = 1e4 + 5;
//
//int main()
//{
//	char s[N], p[M];//s������pģʽ��
//	int next[M];//ģʽ����next����
//	int n = strlen(s + 1), m = strlen(p + 1);//n�����ĳ��ȣ�mģʽ���ĳ���
//	next[0] = next[1] = 0;//��ʼ��next����
//	for (int i = 2, j = 0; i <= m; i++)
//	{
//		//����ƥ��p[i]��p[j+1]
//		while (j != 0 && p[i] != p[j + 1])//
//			j = next[j];
//		if (p[i] == p[j + 1]) j++;//��while������Ҫôj=0,Ҫôp[i]==p[j+1] ���ƥ��ɹ� ��j����
//		next[i] = j; //i���ƥ��ʧ�ܾͻص�j,��Ϊ��ʱp[1~j]=p[i-j+1~i]��j=0(�ص�����ĵط����¿�ʼƥ��)
//	}
//
//	//ͨ��next�������ƥ��
//	for (int i = 1, j = 0; i <= n; i++)
//	{
//		while (j != 0 && s[i] != p[j + 1])
//			j = next[j];//ʧ��ʱj->next[j]
//		if (s[i] == p[j + 1])j++;//�ɹ�ƥ��һ���ַ�,��j����ƶ�
//		if (j == m)//�ɹ�ƥ��ģʽ��
//		{
//			//����ƥ��ɹ�����
//		}
//	}
//
//	return 0;
//}