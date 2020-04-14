#include <iostream>
#include <vector>

void print_result(std::vector<int> result){
    for(int  i : result){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

std::vector<int> merge(std::vector<int> left,std::vector<int> right){
    std::vector<int> result;
    std::vector<int>::iterator iter_left = left.begin();
    std::vector<int>::iterator iter_right = right.begin();
    while(iter_left != left.end() && iter_right != right.end()){
        if(*iter_left > *iter_right){
            result.push_back(*iter_right);
            iter_right++;
        }
        else{
            result.push_back(*iter_left);
            iter_left++;
        }
    }
    while(iter_left != left.end()){
        result.push_back(*iter_left);
        iter_left++;
    }
    while(iter_right != right.end()){
        result.push_back(*iter_right);
        iter_right++;
    }
    return result;
}

std::vector<int> mergeSort(std::vector<int> rankList){
    int len = rankList.size();
    if(len == 1 || len == 0){
        return rankList;
    }
    else{
        std::vector<int> left,right;
        int mid = len / 2;
        left.assign(rankList.begin(), rankList.begin() + mid);
        right.assign(rankList.begin() + mid, rankList.end());
        return merge(mergeSort(left), mergeSort(right));
    }
}

int main(){
    std::vector<int> rankList = {1,3,9,2,5,7,6,4,8,0,5};
    print_result(mergeSort(rankList));
    return 0;
}