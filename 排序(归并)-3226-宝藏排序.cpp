//#include <iostream>
//using namespace std;
//const int N = 1e5 + 9;
//int a[N], b[N];
//
//void MergeSort(int a[], int l, int r)
//{
//	if (l == r)return;
//
//	int mid = (l + r) / 2;//ע������Ĭ�ϻ�����ȡ��
//	MergeSort(a, l, mid);
//	MergeSort(a, mid + 1, r);
//	//������ɺ�a[l,mid]��a[mid+1,r]���Ƿֱ������
//
//	//��a[l,r]������һ�����ط��뵽b[l,r]
//	int pl = l, pr = mid + 1, pb = l;
//	while (pl <= mid || pr <= r)
//	{
//		if (pl > mid)
//		{
//			//�����Ѿ�����
//			b[pb++] = a[pr++];
//		}
//		else if (pr > r)
//		{
//			//�Ұ���Ѿ�����
//			b[pb++] = a[pl++];
//		}
//		else
//		{
//			//���߶�����Ԫ�أ�ȡ��С�ķŵ�b��
//			if (a[pl] < a[pr])b[pb++] = a[pl++];
//			else b[pb++] = a[pr++];
//		}
//	}
//	//��ɺ��ƻ�ȥ
//	for (int i = l; i <= r; i++)a[i] = b[i];
//}
//
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    int n; cin >> n;
//    for (int i = 1; i <= n; ++i)cin >> a[i];
//    MergeSort(a, 1, n);
//    for (int i = 1; i <= n; ++i)cout << a[i] << " \n"[i == n];
//    return 0;
//}