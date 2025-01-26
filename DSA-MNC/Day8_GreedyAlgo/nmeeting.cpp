#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    struct Meeting {
        int start;
        int end;
        int index;
    };

    int maxMeetings(vector<int>& start, vector<int>& end) {
        int n = start.size();
        vector<Meeting> meetings(n);

        // Fill the meeting structure
        for (int i = 0; i < n; i++) {
            meetings[i] = {start[i], end[i], i + 1};
        }

        // Sort meetings by their end time
        sort(meetings.begin(), meetings.end(), [](const Meeting& a, const Meeting& b) {
            return a.end < b.end;
        });

        int ans = 1;  // At least one meeting can always be held
        int lastEnd = meetings[0].end;  // End time of the first meeting

        for (int i = 1; i < n; i++) {
            if (meetings[i].start > lastEnd) {
                ans++;
                lastEnd = meetings[i].end;  // Update last end time
            }
        }
        return ans;
    }
};

// Driver Code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> start;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            start.push_back(num);
        }

        vector<int> end;
        getline(cin, input);
        stringstream s22(input);
        while (s22 >> num) {
            end.push_back(num);
        }

        Solution ob;
        int ans = ob.maxMeetings(start, end);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
