//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 1e9 + 9;
//int *a;
//
//int Partition(int *a, int l, int r)
//{
//	int pivot = a[r];
//	int i = l, j = r;
//	while (i < j)
//	{
//		while (i < j && a[i] <= pivot)i++;
//		while (i < j && a[j] >= pivot)j--;
//		if (i < j)swap(a[i], a[j]);
//		else swap(a[i], a[r]);
//	}
//	return i;
//}
//
//void QuickSort(int *a, int l, int r)
//{
//	if (l < r)
//	{
//		int mid = Partition(a, l, r);
//		QuickSort(a, l, mid-1);
//		QuickSort(a, mid+1, r);
//	}
//}
//
//
//int main()
//{
//	int n; cin >> n;
//	a = new int[n + 1];
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	int l = 1, r = n;
//	QuickSort(a, l, r);
//	for (int i = 1; i <= n; i++)cout << a[i] << " \n"[i==n];
//	return 0;
//}