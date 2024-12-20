#include<iostream>
#include<vector>
using namespace std;
class solution{
public:
void sortColors(vector<int>&nums){
    int left = 0;
    int right = nums.size()-1;
    int mid = 0;
    while(mid<=right){
        if(nums[mid]==0){
            swap(nums[mid],nums[left]);
            mid++;
            left++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[right],nums[mid]);
            right--;
        }
    }
}
};


int main(){
    solution ss;
    vector<int>nums = {1,2,2,0,0};
    for(auto it:nums){
        cout<<it<<" ";
    }

    cout<<endl;
    ss.sortColors(nums);
     for(auto it:nums){
        cout<<it<<" ";
    }
    return 0;

}