#include <vector>
#include <iostream>
using namespace std;

void sortColors(vector<int>& nums) {
    int low = 0, current = 0, high = nums.size() - 1;

    while (current <= high) {
        if (nums[current] == 0) {
            swap(nums[low], nums[current]);
            low++;
            current++;
        } else if (nums[current] == 2) {
            swap(nums[current], nums[high]);
            high--;
        } else {
            current++;
        }
    }
}

// Utility function to print the array
void printArray(const vector<int>& nums) {
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    cout << "Original array:" << endl;
    printArray(nums);

    sortColors(nums);

    cout << "Sorted array:" << endl;
    printArray(nums);

    return 0;
}
