#include <iostream>
using namespace std;

using ll = long long;
const int N = 1e3+5;
ll w[N],v[N],dp[N][N];
// dp[i][j]表示到第i个物品为止,拿的物品总体积为j的最大价值
//


int main()
{
	int n, V; cin >> n >> V;
	for (int i = 1; i <= n; i++)
		cin >> w[i] >> v[i];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= V; j++)
		{
			if (j >= w[i])dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			else dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[n][V];
	return 0;
}