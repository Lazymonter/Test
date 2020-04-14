#include <iostream>
#include <vector>

void bubbleSort(std::vector<int> &rank_list){
    int len = rank_list.size();
    for(int i = 0;i < len - 1;i++){
        for(int j = 0;j < len - i -1;j++){
            if(rank_list[j] > rank_list[j + 1]){
                int temp = rank_list[j];
                rank_list[j] = rank_list[j + 1];
                rank_list[j + 1] = temp;
            }
        }
    }
}


int main(){
    std::vector<int> rank_list = {4,3,1,2,7,6,9,8,5,0};
    bubbleSort(rank_list);
    for(int i : rank_list){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}