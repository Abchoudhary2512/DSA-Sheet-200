#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int zerosumsubarray(vector<int>&nums){
    int ans = 0;
    int sum = 0;
    unordered_map<int,int>map;
    map[0] = -1; //value   index
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
        if(map.find(sum ) != map.end()){
            ans = max(ans,i - map[sum]);
        }
        else{
            map[sum] = i;
        }
    }
    return ans;

}

int main(){
    vector<int>nums = {1,3,4,5,-1,-3,-1};
    int x = zerosumsubarray(nums);
    cout<<"the longest subarray with zero sum is : "<<x<<endl;
    return 0;
}