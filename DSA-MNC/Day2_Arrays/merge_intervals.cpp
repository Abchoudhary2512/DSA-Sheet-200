#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;

        // Sort the intervals based on their start times (default sorting for 2D vectors)
        sort(intervals.begin(), intervals.end());

        for (auto it : intervals) {
            // If result is empty or the current interval does not overlap with the last interval in result
            if (result.empty() || it[0] > result.back()[1]) {
                result.push_back(it); // Add the current interval to the result
            } else {
                // Merge the intervals
                result.back()[1] = max(result.back()[1], it[1]);
            }
        }

        return result;
    }
};

// Utility function to print the intervals
void printIntervals(const vector<vector<int>>& intervals) {
    for (const auto& interval : intervals) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;
}

int main() {
    Solution sol;

    // Input: List of intervals
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    cout << "Original Intervals: ";
    printIntervals(intervals);

    // Merging intervals
    vector<vector<int>> mergedIntervals = sol.merge(intervals);

    cout << "Merged Intervals: ";
    printIntervals(mergedIntervals);

    return 0;
}
