//考虑时间和空间
#include<iostream>
using namespace std;
int jisuan(int num)
{
    int temp1 = num / 3;
    int temp2 = (num - temp1 * 3) % 3;
    if(temp2 == 2)
    {
        temp1 = temp1 * 2 + 1;
    }
    else
    {
        temp1 = temp1 * 2;
    }
    return temp1;
}
int judge(int start,int end)
{
    return (jisuan(end) - jisuan(start - 1));
}
int main()
{
    int start,end;
    cin >> start >> end;
    cout << judge(start,end) << endl;
}
