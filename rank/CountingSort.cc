#include <iostream>
#include <vector>

void countingSort(std::vector<int> &rank_list, int max){
    std::vector<int> bucket(max + 1, 0);
    int sortedIndex = 0;
    int len = rank_list.size();
    int bucket_len = max + 1;
    for(int i : rank_list){
        bucket[i]++;
    }
    for(int j = 0;j < bucket_len;j++){
        while(bucket[j]){
            rank_list[sortedIndex++] = j;
            bucket[j]--;
        }
    }
}


int main(){
    std::vector<int> rank_list = {4,3,1,2,7,6,9,8,5,0};
    countingSort(rank_list, 9);
    for(int i : rank_list){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}