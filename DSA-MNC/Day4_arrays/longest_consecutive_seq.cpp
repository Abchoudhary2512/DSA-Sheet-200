#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Longest_consecutive_sequence(vector<int> &nums)
{
    int longest_length = 0;
    unordered_map<int, bool> visited;

    // marked all false
    for (int x : nums)
    {
        visited[x] = false;
    }

    // now traversing and getting the LCS
    for (int x : nums)
    {
        if(visited[x]){
            continue;
        }
        visited[x] = true;
        int current_length = 1;

        //forward number check
        int next_num = x+1;
        while(visited.find(next_num) != visited.end()
        && !visited[next_num]
         ){
            visited[x] = true;
            current_length++;
            next_num++;
         }

         //previous number
         int prev_num = x-1;
        while(visited.find(prev_num) != visited.end()
        && !visited[prev_num]
         ){
            visited[x] = true;
            current_length++;
            prev_num--;
         }

         longest_length = max(longest_length,current_length);


    }
    return longest_length;
}

int main()
{
    vector<int> nums = {1, 3, 4, 5, -1, 0};
    int n = nums.size(); // 6
    int x = Longest_consecutive_sequence(nums);
    cout << "the Longest_consecutive_sequence is : " << x << endl;
    return 0;
}