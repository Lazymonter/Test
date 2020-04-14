#include <iostream>
#include <vector>

void insertionSort(std::vector<int> &rank_list){
    int len = rank_list.size();
    for(int i = 1;i < len;i++){
        int temp = rank_list[i];
        int preIndex = i - 1;
        while(preIndex >= 0 && rank_list[preIndex] > temp){
            rank_list[preIndex + 1] = rank_list[preIndex];
            preIndex--;
        }
        rank_list[preIndex + 1] = temp;
    }
}

int main(){
    std::vector<int> rank_list = {4,3,1,2,7,6,9,8,5,0};
    insertionSort(rank_list);
    for(int i : rank_list){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}