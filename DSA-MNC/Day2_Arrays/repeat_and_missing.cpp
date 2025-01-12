#include <iostream>
#include <vector>
using namespace std;

vector<int> findMissingRepeating(vector<int> &nums)
{
    int n = nums.size();
    long long sum_n = (n * (n + 1)) / 2;                  // Expected sum of numbers 1 to n
    long long sum_sq_n = (n * (n + 1) * (2 * n + 1)) / 6; // Expected sum of squares of numbers 1 to n

    long long sum_nums = 0, sum_sq_nums = 0;

    for (int num : nums)
    {
        sum_nums += num;             // Actual sum of array elements
        sum_sq_nums += (long long)num * num; // Actual sum of squares of array elements
    }

    long long diff = sum_n - sum_nums;                 // missing - repeating
    long long diff_sq = sum_sq_n - sum_sq_nums;        // missing^2 - repeating^2
    long long sum = diff_sq / diff;                   // missing + repeating

    int missing = (diff + sum) / 2;                   // Solving for missing
    int repeating = missing - diff;                  // Solving for repeating

    return {repeating, missing};
}

void print(vector<int> nums)
{
    for (auto it : nums)
    {
        cout << it << " ";
    }
}

int main()
{
    vector<int> nums = {1, 2, 4, 2, 5};
    vector<int> temp = findMissingRepeating(nums);
    cout << "The repeating and missing values are:" << endl;
    print(temp);

    return 0;
}
