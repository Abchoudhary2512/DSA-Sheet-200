#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int buystock(vector<int>&nums){
    int buy_price = nums[0];
    int crt_profit = 0;
    int max_profit =0;
    for(auto it: nums){
        if(it<buy_price){
            buy_price = it;

        }
        else{
            crt_profit = it-buy_price;
            max_profit = max(max_profit,crt_profit);
        }
    }
    return max_profit;
}


int main()
{
    vector<int>nums = {1,5,3,4};
    cout<<"the maximum profit is "<<buystock(nums)<<endl;
    return 0;
}