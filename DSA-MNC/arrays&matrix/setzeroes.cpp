#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row_size = matrix.size();
        int col_size = matrix[0].size();
        bool first_row_zero = false, first_col_zero = false;

        // Step 1: Determine if the first row or first column needs to be zeroed
        for (int i = 0; i < row_size; i++) {
            if (matrix[i][0] == 0) {
                first_col_zero = true;
                break;
            }
        }
        for (int j = 0; j < col_size; j++) {
            if (matrix[0][j] == 0) {
                first_row_zero = true;
                break;
            }
        }

        // Step 2: Use the first row and first column to mark zero rows and columns
        for (int i = 1; i < row_size; i++) {
            for (int j = 1; j < col_size; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Step 3: Set matrix cells to zero based on the markers in the first row and column
        for (int i = 1; i < row_size; i++) {
            for (int j = 1; j < col_size; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 4: Zero out the first row if needed
        if (first_row_zero) {
            for (int j = 0; j < col_size; j++) {
                matrix[0][j] = 0;
            }
        }

        // Step 5: Zero out the first column if needed
        if (first_col_zero) {
            for (int i = 0; i < row_size; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};

int main() {
    Solution solution;

    // Test case: Input matrix
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    cout << "Original matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    // Apply the setZeroes function
    solution.setZeroes(matrix);

    // Output the modified matrix
    cout << "\nModified matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
