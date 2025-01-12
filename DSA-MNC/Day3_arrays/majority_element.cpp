//boyre moore voting algortihm
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate = 0, count = 0;

    // Step 1: Find the candidate using Boyer-Moore Voting Algorithm
    for (int num : nums) {
        if (count == 0) {
            candidate = num; // Set the current candidate
        }
        count += (num == candidate) ? 1 : -1; // Increment or decrement the count
    }

    // Step 2: Verify the candidate
    count = 0;
    for (int num : nums) {
        if (num == candidate) count++;
    }

    if (count > nums.size() / 2) {
        return candidate;
    }
    // In problems where a majority is guaranteed, this should never happen
    return -1;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << majorityElement(nums) << endl;
    return 0;
}
