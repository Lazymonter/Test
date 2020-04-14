#include <iostream>
#include <vector>
//桶内使用插入排序
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


void bucketSort(std::vector<int> & rank_list,int bucket_count = 5){
    if(!rank_list.size()){
        return;
    }
    int max = rank_list[0];
    int min = rank_list[0];
    for(int i : rank_list){
        if(i > max){
            max = i;
        }
        else if(i < min){
            min = i;
        }
        else{
            continue;
        }
    }
    int bucket_size = ((max - min) / bucket_count ) + 1;
    std::vector<std::vector<int>> buckets(bucket_count);
    for(int i : rank_list){
        buckets[(i - min) / bucket_size].push_back(i);
    }
    rank_list.clear();
    for(int i = 0;i < bucket_count;i++){
        insertionSort(buckets[i]);
        for(int j : buckets[i]){
            rank_list.push_back(j);
        }
    }
}

int main(){
    std::vector<int> rank_list = {4,3,1,2,7,6,9,8,5,0};
    bucketSort(rank_list);
    for(int i : rank_list){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}