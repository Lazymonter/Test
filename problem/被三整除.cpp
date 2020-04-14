//小Q得到一个神奇的数列: 1, 12, 123,...12345678910,1234567891011...。
//并且小Q对于能否被3整除这个性质很感兴趣。
//小Q现在希望你能帮他计算一下从数列的第l个到第r个(包含端点)有多少个数可以被3整除。
//不考虑时间和空间
#include<iostream>
#include<string>
using namespace std;
bool judge(string s)
{
    int sum = 0;
    for(int i = 0;i < s.length();i++)
    {
        sum = sum + s[i] - '0';
    }
    if(sum % 3 == 0)
    {
        return true;
    }
    else{
        return false;
    }
}
int zhengchu(int start,int end)
{
    int sum = 0;
    string s = "";
    for(int i = 0;i < start;i++)
    {
        s += to_string(i);
    }
    for(int j = start;j <= end;j++)
    {
        s += to_string(j);
        if(judge(s))
        {
            sum++;
        }
    }
    return sum;
     
}
int main()
{
    int start = 0,end = 0,result = 0;
    cin >> start >> end;
    result = zhengchu(start,end);
    cout << result << endl;
    return 0;
}
