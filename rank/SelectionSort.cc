#include <iostream>
#include <vector>

void selectionSort(std::vector<int> &rank_list){
    int len = rank_list.size();
    int min;
    for(int i = 0;i < len - 1;i++){
        min = i;
        for(int j = i + 1;j < len;j++){
            if(rank_list[min] > rank_list[j]){
                min = j;
            }
        }
        int temp = rank_list[min];
        rank_list[min] = rank_list[i];
        rank_list[i] = temp;
    }
}

int main(){
    std::vector<int> rank_list = {2,1,4,3,6,5,9,7,8,0};
    selectionSort(rank_list);
    for(int i : rank_list){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}