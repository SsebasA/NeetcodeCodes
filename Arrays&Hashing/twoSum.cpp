#include <bits/stdc++.h>
using namespace std;    


vector<int> twoSum(vector<int>&nums, int target){
   vector<int> r;
   unordered_map<int, int> m;
    for(int i = 0; i < nums.size(); i++){
         int complement = target - nums[i];
         if(m.find(complement) != m.end()){
              r.push_back(m[complement]);
              r.push_back(i);
              return r;
         }
         m[nums[i]] = i;
    }
}


int main(){
    vector<int> nums = {-1,-2,-3,-4,-5};
    int target = -8;
    vector<int> result = twoSum(nums, target);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}