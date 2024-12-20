#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int maxProfit(vector<int> &prices)
// {
//     int buy_price = prices[0];
//     int maxi_profit = 0;
//     int curr_profit = 0;
//     for (int i = 0; i < prices.size(); i++)
//     {
//         if (prices[i] < buy_price)
//         {
//             buy_price = prices[i];
//         }
//         else{
//             curr_profit = prices[i]-buy_price;
//             maxi_profit = max(maxi_profit,curr_profit);
//         }
//     }
//     return maxi_profit;
// }

// int main()
// {
//     vector<int> prices = {1, 4, 5, 9, 0};
//     int ans = maxProfit(prices);
//     cout<<"The max Profit is "<<ans<<endl;
//     return 0;
// }



int maxSubarray(vector<int>&nums){
    int maxSum = INT_MIN;
    int curr_sum=0;
    for(int i:nums){
        curr_sum += i;
        if(curr_sum<i){
            curr_sum = i;
        }
        maxSum = max(maxSum,curr_sum);
    }
    return maxSum;

}
int main(){
    vector<int>nums = {1,-2,4,5};
    int ans = maxSubarray(nums);
    cout<<"the max cont. sum is "<<ans<<endl;
    // for(int i=0;i<nums.size();i++){
    //     cout<<nums[i]<<" ";
    // }
    cout<<endl;
    return 0;
}