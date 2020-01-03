#include <iostream>
#include <vector>

using namespace std;
void print(vector<int> &result)
{
    for(vector<int>::const_iterator iter = result.begin(); iter != result.end();iter++){
        cout << *iter << " ";
    }
    cout << endl;
}
void Exchange(vector<int> &result,int i,int j)
{
    int temp = result[i];
    result[i] = result[j];
    result[j] = temp;

}
int Partition(vector<int> &A,int p,int r)
{
    int x = A[r];
    int i = p - 1;
    int temp = 0;
    for(int j = p;j < r;j++)
    {
        if(A[j] <= x)
        {
            i++;
            Exchange(A,i,j);
            cout << "主元为" << x << "  " << "交换了" << A[i] << "和" << A[j] << endl;
        }
    }
    Exchange(A,i + 1,r);
    cout << "交换了" << A[i + 1] << "和" << A[r] << endl;
    print(A);
    return i + 1;

}
void QuickSort(vector<int> &A,int p,int r)
{
    int q = 0;
    if(p < r)
    {
        q = Partition(A,p,r);
        QuickSort(A,p,q - 1);
        QuickSort(A,q + 1,r);
    }
}

int main()
{
    vector<int> A = {22,4,5,3,1,25,67,9,8,23};
    QuickSort(A,0,9);
    for(int i = 0;i < 10;i++)
    {
       cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
