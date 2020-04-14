#include <iostream>
#include <vector>

void shellSort(std::vector<int> &rank_list){
    int len = rank_list.size();
    int gap = len / 2;
    while(gap){
        for(int i = 0;i < gap;i++){
            for(int j = i + gap;j < len;j += gap){
                int temp = rank_list[j];
                int preIndex = j - gap;
                while(preIndex >= 0 && rank_list[preIndex] > temp){
                    rank_list[preIndex + gap] = rank_list[preIndex];
                    preIndex -= gap;
                }
                rank_list[preIndex + gap] = temp;
            }
        }
        gap = gap / 2;
    }
}


int main(){
    std::vector<int> rank_list = {4,3,1,2,7,6,9,8,5,0};
    shellSort(rank_list);
    for(int i : rank_list){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}