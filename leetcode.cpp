#include<iostream> 
using namespace std;

Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>v;
        unordered_map<int,int>_map;
        for(int i=0;i<nums.size();i++){
            
            if(_map[target-nums[i]]>0){
                v.push_back(_map[target-nums[i]]-1);
                v.push_back(i);
                
            }
            else{
            _map[nums[i]]=i+1;
            }
        }
        return v;
    }
};