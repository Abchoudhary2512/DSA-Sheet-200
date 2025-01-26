#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPlatform(vector<int>& arrival, vector<int>& departure) {
        int n = arrival.size();

        // Sort both arrival and departure times
        sort(arrival.begin(), arrival.end());
        sort(departure.begin(), departure.end());

        int platforms_needed = 0;
        int max_platforms = 0;

        int i = 0, j = 0; // Pointers for arrival and departure arrays

        // Traverse both arrays
        while (i < n && j < n) {
            if (arrival[i] <= departure[j]) {
                // Train arrives, increase platforms needed
                platforms_needed++;
                i++;
            } else {
                // Train departs, decrease platforms needed
                platforms_needed--;
                j++;
            }
            // Update the maximum platforms needed
            max_platforms = max(max_platforms, platforms_needed);
        }

        return max_platforms;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arrival(n), departure(n);
        for (int i = 0; i < n; i++) cin >> arrival[i];
        for (int i = 0; i < n; i++) cin >> departure[i];

        Solution ob;
        cout << ob.findPlatform(arrival, departure) << endl;
    }
    return 0;
}
