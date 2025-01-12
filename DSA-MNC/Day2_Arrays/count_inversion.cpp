#include <iostream>
#include <vector>
using namespace std;

// Function to merge two subarrays and count inversions
int mergeAndCount(vector<int> &arr, int left, int mid, int right) {
    // Temporary array to store the merged result
    vector<int> temp(right - left + 1);
    int i = left;      // Pointer for the left subarray
    int j = mid + 1;   // Pointer for the right subarray
    int k = 0;         // Pointer for the temp array
    int inv_count = 0; // To count inversions

    // Merge the two subarrays while counting inversions
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            // If arr[i] <= arr[j], no inversion
            temp[k++] = arr[i++];
        } else {
            // If arr[i] > arr[j], all elements from arr[i] to arr[mid] are greater than arr[j]
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1); // Count inversions
        }
    }

    // Copy any remaining elements from the left subarray
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy any remaining elements from the right subarray
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copy the sorted temp array back into the original array
    for (int i = left, k = 0; i <= right; i++, k++) {
        arr[i] = temp[k];
    }

    return inv_count;
}

// Recursive function to implement Merge Sort and count inversions
int mergeSortAndCount(vector<int> &arr, int left, int right) {
    int inv_count = 0;

    if (left < right) {
        int mid = left + (right - left) / 2;

        // Count inversions in the left subarray
        inv_count += mergeSortAndCount(arr, left, mid);

        // Count inversions in the right subarray
        inv_count += mergeSortAndCount(arr, mid + 1, right);

        // Count inversions during the merge step
        inv_count += mergeAndCount(arr, left, mid, right);
    }

    return inv_count;
}

int main() {
    vector<int> arr = {8, 4, 2, 1}; // Example input
    int inversionCount = mergeSortAndCount(arr, 0, arr.size() - 1);

    cout << "Inversion Count = " << inversionCount << endl; // Output the result
    return 0;
}
    