#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxisub(vector<int>&nums){
    int maxi = INT_MIN;
    int curr_sum = 0;
    for(auto it:nums){
        curr_sum += it;
        maxi = max(maxi,curr_sum);
        if(curr_sum<0){
            curr_sum = 0;
        }
    }
    return maxi;
}


int main(){
    vector<int>nums = {1,2,3,-2,-4};

    cout<<"maximum subarray sum is "<<maxisub(nums)<<endl;
}