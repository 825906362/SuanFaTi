//#include<iostream>
//#include<vector>
//using namespace std;
//const int N = 2e5 + 9;
//
//vector<pair<int,int>>v;	//{num,cnt}
//
//int main()
//{
//	int x; cin >> x;
//	//ö�����п��ܵ�������
//	for (int i = 2; i <= x / i; i++)
//	{
//		//�����������ֱ������
//		if (x % i)continue;
//		//���������������ô��Ȼ��һ�������ӣ���С����ö�ٵ����Ծ�����
//		//cnt��ʾ��ǰ���������i��ָ��
//		int cnt = 0;
//		//һֱ����ֱ�����ɾ�
//		while (x % i == 0)cnt++, x /= i;
//		v.push_back({ i, cnt });
//	}
//	if (x > 1)v.push_back({ x,1 });
//	for (auto i : v)cout << i.first << " " << i.second << "\n";
//	return 0;
//}
//
