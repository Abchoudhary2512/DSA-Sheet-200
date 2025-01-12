#include <iostream>
#include <vector>
using namespace std;

bool checkfortarget(vector<vector<int>> matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int end = row * col - 1;
    int start = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // if(matrix[])
        int row_num = mid / col;
        int col_num = mid % col;
        if (matrix[row_num][col_num] > target)
        {
            end = mid - 1;
        }
        else if (matrix[row_num][col_num] < target)
        {
            start = mid + 1;
        }
        else
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3},
                                  {4, 5, 6}};

    int target = 51;
    if (checkfortarget(matrix, target))
    {
        cout << "the element or the target exisits " << endl;
    }
    else
    {
        cout << "no target found "<< endl;
    }

    return 0;
}