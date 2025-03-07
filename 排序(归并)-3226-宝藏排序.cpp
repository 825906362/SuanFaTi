//#include <iostream>
//using namespace std;
//const int N = 1e5 + 9;
//int a[N], b[N];
//
//void MergeSort(int a[], int l, int r)
//{
//	if (l == r)return;
//
//	int mid = (l + r) / 2;//注意这里默认会向下取整
//	MergeSort(a, l, mid);
//	MergeSort(a, mid + 1, r);
//	//排序完成后a[l,mid]和a[mid+1,r]都是分别有序的
//
//	//将a[l,r]两部分一个个地放入到b[l,r]
//	int pl = l, pr = mid + 1, pb = l;
//	while (pl <= mid || pr <= r)
//	{
//		if (pl > mid)
//		{
//			//左半边已经放完
//			b[pb++] = a[pr++];
//		}
//		else if (pr > r)
//		{
//			//右半边已经放完
//			b[pb++] = a[pl++];
//		}
//		else
//		{
//			//两边都还有元素，取个小的放到b里
//			if (a[pl] < a[pr])b[pb++] = a[pl++];
//			else b[pb++] = a[pr++];
//		}
//	}
//	//完成后复制回去
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