//#include<iostream>
//using namespace std;
//
////N取值为nlogn
//const int N = 1e5 + 5;
//int e[N]; //e[i]表示节点i的权值,即有多少个元素经过该节点,该项有时可以省略
//int son[N][2]; //son[i][0]表示该节点的左儿子(走0边),son[i][1]表示该节点右儿子(走1边)
//int tot = 1; //tot表示节点池
//
////插入数x的二进制,从高位到低位
//void insert(int x)
//{
//	int o = 1; //o表示当前节点编号
//	e[o]++; //初始节点权值++
//	for (int i = 30; i >= 0; i--) //从高位往低位遍历
//	{
//		int y = x >> i & 1;//y表示x第i位的值
//		if (son[o][y] == 0)//下一个节点不存在
//			son[o][y] = ++tot; //节点池+1,赋值给下一个节点
//		o = son[o][y]; //更新当前节点o
//		e[o]++; //每走一位,当前节点权值++
//	}
//}
//
////查询Trie中与x异或的最大值
//int query1(int x)
//{
//	int res = 0, o = 1; //o表示当前节点编号,res表示结果
//	for (int i = 30; i >= 0; i--)
//	{
//		int y = x >> i & 1; //y表示x第i位的值
//		if (son[o][!y])//优先往与x第i位相反的方向走,这样异或结果为1,更大
//		{
//			o = son[o][!y]; //往下走
//			res |= (1ll << i); //更新res(|= :按位或;longlong类型的1 左移i位)
//		}
//		else o = son[o][y]; //只能往下走,并且这条路res这位为0,所以不用更新
//	}
//	return res;
//}
//
////查询Trie中比x大的元素的个数
//int query2(int x)
//{
//	int res = 0, o = 1; //o表示当前节点编号,res表示答案个数
//	for (int i = 30; i >= 0; i--)
//	{
//		int y = x >> i & 1;
//		//只有当y==0时可以加上右儿子的贡献
//		if (y == 0)res += e[son[o][1]];//当第i位为0时,加下右的所有权值,也就是e[son[o][1]]
//		if (son[o][y] == 0)break; //节点编号走到头了,说明走完了,则break
//		o = son[o][y]; //往下走
//	}
//	return res;
//}
//
//int main()
//{
//
//
//	return 0;
//}