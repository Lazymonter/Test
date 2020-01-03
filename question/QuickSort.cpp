#include <iostream>

using namespace std;
void print(int * A)
{
    for(int i = 0;i < 10;i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void Exchange(int * A,int i,int j)
{
    if(A != NULL)
    {
      int temp = A[i];
      A[i] = A[j];
      A[j] = temp;
    }

}
int Partition(int * A,int p,int r)
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
void QuickSort(int * A,int p,int r)
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
    int A[10] = {22,4,5,3,1,25,67,9,8,23};
    QuickSort(A,0,9);
    for(int i = 0;i < 10;i++)
    {
       cout << A[i] << " ";
    }
    cout << "\n" << "Hello world!" << endl;
    return 0;
}
