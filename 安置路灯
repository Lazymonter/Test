//小Q正在给一条长度为n的道路设计路灯安置方案。
//为了让问题更简单,小Q把道路视为n个方格,需要照亮的地方用'.'表示, 不需要照亮的障碍物格子用'X'表示。
//小Q现在要在道路上设置一些路灯, 对于安置在pos位置的路灯, 这盏路灯可以照亮pos - 1, pos, pos + 1这三个位置。
//小Q希望能安置尽量少的路灯照亮所有'.'区域, 希望你能帮他计算一下最少需要多少盏路灯。
#include<iostream>
#include<string>
using namespace std;
int judge(int length,string s)
{
    int result = 0;
    if(length == 0)
    {
        return 0;
    }
    int i = 0;
    while(i < length)
    {
        if(s[i] == '.')
        {
            result++;
            i += 3;
        }
        else{
            i++;
        }
    }
    return result;
}
int main()
{
    string s;
    int length = 0;
    int turn = 0;
    cin >> turn;
    for(int i = 0;i < turn;i++)
    {
        cin >> length >> s;
        cout << judge(length,s) << endl;
    }
}
