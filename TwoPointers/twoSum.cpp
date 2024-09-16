#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target){
    vector<int> r;
    int n = numbers.size();
    int i = 0;
    int j = n -1 ;
    while(i <= j){
        if(numbers[i] + numbers[j] == target){
            r.push_back(i+1);
            r.push_back(j+1);
            return r;
        } else if(numbers[i] + numbers[j] < target){
            i++;
        } else {
            j--;
        }
    }
}


int main(){
    vector<int> nums;
    nums = {1,2,3,4};
    int target = 3;
    vector<int> r = twoSum(nums, target);
    for(int i = 0; i < r.size(); i++){
        cout << r[i] << " ";
    }

}