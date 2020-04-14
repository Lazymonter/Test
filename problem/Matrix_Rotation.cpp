#include <iostream>

using namespace std;

void swap(int * a,int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void clockwise(int arr[][4],int n)//Ë³Ê±Õë
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n - i;j++)
        {
            swap(arr[i][j],arr[n - 1 - j][n - 1 - i]);
        }
    }
    for(int i = 0;i < (n / 2);i++)
    {
        for(int j = 0;j < n;j++)
        {
            swap(arr[i][j],arr[n - 1 - i][j]);
        }
    }
}

void anticlock(int arr[][4],int n)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = i + 1;j < n;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i = 0;i < (n / 2);i++)
    {
        for(int j = 0;j < n;j++)
        {
            swap(arr[i][j],arr[n - 1 - i][j]);
        }
    }
}

void print(int arr[][4],int n)
{
    for(int i = 0;i < 4;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    print(arr,4);
    clockwise(arr,4);
    print(arr,4);
    anticlock(arr,4);
    print(arr,4);
    return 0;
}
