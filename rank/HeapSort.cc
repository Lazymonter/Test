#include <iostream>
#include <vector>

void Exchange(std::vector<int> &result,int i,int j)
{
    int temp = result[i];
    result[i] = result[j];
    result[j] = temp;
}

void heapify(std::vector<int> &rank_list, int focus,int len){
    int left = 2 * focus + 1;
    int right = 2 * focus + 2;
    int largest = focus;
    if(left < len && rank_list[left] > rank_list[largest]){
        largest = left;
    }
    if(right < len && rank_list[right] > rank_list[largest]){
        largest = right;
    }
    if(largest != focus){
        Exchange(rank_list, largest, focus);
        heapify(rank_list, largest, len);
    }
}

void buildMaxHeap(std::vector<int> &rankList){
    int len = rankList.size();
    for(int i = len / 2; i>= 0; i--){
        heapify(rankList, i, len);
    }
}

void heapSort(std::vector<int> &rank_list){
    int len = rank_list.size();
    buildMaxHeap(rank_list);
    for(int i = len - 1;i > 0;i--){
        Exchange(rank_list, 0, i);
        len--;
        heapify(rank_list, 0, len);
    }
}

int main(){
    std::vector<int> rank_list = {4,3,1,2,7,6,9,8,5,0};
    heapSort(rank_list);
    for(int i : rank_list){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}