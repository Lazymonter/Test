#include <iostream>
#include <vector>

void Exchange(std::vector<int> &result,int i,int j)
{
    int temp = result[i];
    result[i] = result[j];
    result[j] = temp;
}
int Partition(std::vector<int> &rank_list,int p,int r)
{
    int x = rank_list[r];
    int i = p - 1;
    int temp = 0;
    for(int j = p;j < r;j++)
    {
        if(rank_list[j] <= x)
        {
            i++;
            Exchange(rank_list,i,j);
        }
    }
    Exchange(rank_list,i + 1,r);
    return i + 1;

}
void QuickSort(std::vector<int> &rank_list,int p,int r)
{
    int q = 0;
    if(p < r)
    {
        q = Partition(rank_list,p,r);
        QuickSort(rank_list,p,q - 1);
        QuickSort(rank_list,q + 1,r);
    }
}

int main()
{
    std::vector<int> rank_list = {4,3,1,2,7,6,9,8,5,0};
    QuickSort(rank_list,0,9);
    for(int i : rank_list)
    {
       std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
