#include <iostream>
using namespace std;

// n个整数,求子数组中的最大异或和
// 解法:用01字典树反方向走即可
const int N = 4e6+9;
int e[N];
int son[N][2];
int tot = 1;

void insert(int x)
{
	int o = 1;
	e[o]++;
	for (int i = 30; i >= 0; i--)
	{
		int y = x >> i & 1;
		if (son[o][y] == 0)
			son[o][y] = ++tot;
		o = son[o][y];
		e[o]++;
	}
}

int query(int x)
{
	int o = 1, res = 0;
	for (int i = 30; i >= 0; i--)
	{
		int y = x >> i & 1;
		if (son[o][!y])
		{
			o = son[o][!y];
			res |= (1ll << i);
		}
		else o = son[o][y];
	}
	return res;
}



int main()
{
	int n; cin >> n;
	int x[N];
	for(int i=1;i<=n;i++)
	{
		cin >> x[i];
		insert(x[i]);
	}
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		ans = max(ans, query(x[i]));
	}
	cout << ans;
	return 0;
}