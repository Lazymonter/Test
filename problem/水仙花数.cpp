//“水仙花数”是指一个三位数，它的各位数字的立方和等于其本身，比如：153=1^3+5^3+3^3。 现在要求输出所有在m和n范围内的水仙花数。
//输入数据有多组，每组占一行，包括两个整数m和n（100 ≤ m ≤ n ≤ 999）。


#include<iostream>
using namespace std;
void judge(int m,int n)
{
	int count = 0;
	//输入判断
    if(m < 100)
        m = 100;
    if(n > 999)
        n = 999;
	for(int i = m;i <= n;i++)
	{
		int n1 = i / 100;
		int n2 = (i % 100) / 10;
		int n3 = (i % 100) % 10;
		if(i == n1 * n1 * n1 + n2 * n2 * n2 + n3 * n3 * n3)
		{
			count++;
            if(count == 1)
            {
                cout << i;
            }
            else{
                 cout << " " << i;
            }
		}
	}
	if(!count)
	{
		cout << "no";
	}
	cout << endl;
}
int main()
{
	int m = 0,n = 0;
	while(cin >> m >> n)
	{
		judge(m,n);
	}
}
