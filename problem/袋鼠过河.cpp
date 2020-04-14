//一只袋鼠要从河这边跳到河对岸，河很宽，但是河中间打了很多桩子，每隔一米就有一个，每个桩子上都有一个弹簧，袋鼠跳到弹簧上就可以跳的更远。每个弹簧力量不同，用一个数字代表它的力量，如果弹簧力量为5，就代表袋鼠下一跳最多能够跳5米，如果为0，就会陷进去无法继续跳跃。河流一共N米宽，袋鼠初始位置就在第一个弹簧上面，要跳到最后一个弹簧之后就算过河了，给定每个弹簧的力量，求袋鼠最少需要多少跳能够到达对岸。如果无法到达输出-1
//输入分两行，第一行是数组长度N (1 ≤ N ≤ 10000)，第二行是每一项的值，用空格分隔。
//输出最少的跳数，无法到达输出-1
#include<iostream>
#include<algorithm>

using namespace std;

int judge(int n,int *arr)
{
	int * dp = new int[n + 1];
	for(int i = 0;i < 1005;i++)
		dp[i] = 99999999;
    dp[0] = 0;
	for(int j = 1;j <= n;j++)
		for(int k = 0;k < j;k++)
		{
			if(arr[k] + k >= j)
			{
				dp[j] = min(dp[j],dp[k] + 1);
			}
		}
		return (dp[n] == 99999999 ? -1 : dp[n]);
}
int main()
{
	int n = 0;
	while(cin >> n)
	{
		int * arr = new int[n];
		for(int i = 0;i < n;i++)
			cin >> arr[i];
		cout << judge(n,arr) << endl;
	}
}
