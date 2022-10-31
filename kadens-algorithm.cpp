#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int kadenesAlgorithm(vector<int> array){
    int max_sum = array[0];
    int util_sum = 0;
    int max_val = *max_element(array.begin(), array.end());
    for(auto val : array){
        if(util_sum + val >= val){
            util_sum += val;
            if(max_sum < util_sum){
                max_sum = util_sum;
            }
        } else {
            util_sum = val;
            if(max_sum < util_sum){
                max_sum = val;
            }
        }
    }
    return max_sum;
}

/*

To find the necessary 

*/

pair<int,int> kadenesAlgorithmPos(vector<int> array){
    int max_sum = 0;
    int util_sum = 0;
    int start = 0;
    int end = 0;
    for(int i=0; i<array.size(); i++){
        if(util_sum + array[i] >= 0){
            util_sum += array[i];
            if(max_sum < util_sum){
                max_sum = util_sum;
                end = i;
            }
        } else {
            util_sum = 0;
            start = i+1;
        }
    }
    return make_pair(start, end);
}


int main(){
    
    vector<int> vec = {3, 5, -9, 1, 3, -2, 3, 4, 7, 2, -9, 6, 3, 1, -5, 4};

    cout << *max_element(vec.begin(), vec.end()) << "\n";

    cout << kadenesAlgorithm({-1,-2,-3,-4,-5}) << "\n";

    return 0;
}