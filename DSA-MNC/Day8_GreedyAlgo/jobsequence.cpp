#include <bits/stdc++.h>
using namespace std;

// Structure to represent a job
struct Job {
    int id;       // Job ID
    int profit;   // Profit if job is completed
    int deadline; // Deadline of the job
};

// Comparator to sort jobs by profit in descending order
bool comparator(Job a, Job b) {
    return a.profit > b.profit;
}

class Solution {
public:
    pair<int, int> jobScheduling(Job jobs[], int n) {
        // Step 1: Sort the jobs by profit in descending order
        sort(jobs, jobs + n, comparator);

        // Step 2: Find the maximum deadline among the jobs
        int maxDeadline = 0;
        for (int i = 0; i < n; i++) {
            maxDeadline = max(maxDeadline, jobs[i].deadline);
        }

        // Step 3: Create a timeline to keep track of scheduled jobs
        vector<int> timeline(maxDeadline + 1, -1); // -1 indicates a free slot

        int jobCount = 0;  // Total number of jobs done
        int totalProfit = 0; // Total profit earned

        // Step 4: Schedule jobs
        for (int i = 0; i < n; i++) {
            // Try to schedule the job on or before its deadline
            for (int j = jobs[i].deadline; j > 0; j--) {
                if (timeline[j] == -1) { // Slot is free
                    timeline[j] = jobs[i].id; // Assign this job to the slot
                    jobCount++;               // Increment job count
                    totalProfit += jobs[i].profit; // Add its profit
                    break; // Move to the next job
                }
            }
        }

        // Return the number of jobs done and total profit earned
        return {jobCount, totalProfit};
    }
};

int main() {
    int n = 5;
    Job jobs[] = {
        {1, 100, 2}, // {id, profit, deadline}
        {2, 19, 1},
        {3, 27, 2},
        {4, 25, 1},
        {5, 15, 3}
    };

    Solution sol;
    pair<int, int> result = sol.jobScheduling(jobs, n);

    cout << "Number of Jobs Done: " << result.first << endl;
    cout << "Total Profit Earned: " << result.second << endl;

    return 0;
}
