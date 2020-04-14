#include <iostream>
#include <vector>

void radixSort(std::vector<int> &rank_list,int max_digit){
    int mod = 10;
    int dev = 1;
    std::vector<std::vector<int>> bucket(10);
    for(int i = 0;i < max_digit;i++,dev *= 10,mod *= 10){
        for(int j : rank_list){
            bucket[(j % mod) / dev].push_back(j);
        }
        int sortIndex = 0;
        rank_list.clear();
        for(int j = 0;j < 10;j++){
            if(bucket[j].size()){
                for(int k : bucket[j]){
                    rank_list.push_back(k);
                }
                bucket[j].clear();
            }
        }
    }
}

int main(){
    std::vector<int> rank_list = {4,3,1,2,7,6,9,8,5,0,20,12,56};
    radixSort(rank_list,2);
    for(int i : rank_list){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}