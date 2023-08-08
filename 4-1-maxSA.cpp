#include "../bits/stdc++.h"
using namespace std; 

int maxCrossing (vector<int>& A, int low, int mid, int high) {
    // max subarray of A[i..mid]
    int leftSum = 0;
    int sum = 0;
    for (int i = mid - 1; i >= low; --i) {
        sum += A[i];
        leftSum = max(leftSum, sum);
        
    }
    // max subarray of A[mid + 1..j]
    int rightSum = 0;
    sum = 0;
    for (int j = mid + 1; j <= high; ++j) {
        sum += A[j];
        rightSum = max(rightSum, sum);
    }
    return leftSum + rightSum + A[mid];
}

int maxSubarray (vector<int>& A, int low, int high) {
    if (low > high) return INT_MIN; // stops overflow
    if (high == low) return A[low]; // one element
    int mid = low + (high - low) / 2;
    int leftSum = maxSubarray(A, low, mid - 1);
    int rightSum = maxSubarray(A, mid + 1, high);
    int crossSum = maxCrossing(A, low, mid, high);
    return max(max(leftSum, rightSum), crossSum);

}
int main() {
    vector<int> A = {1,2,3,4};
    cout << maxSubarray(A, 0, A.size() - 1) << endl;
    return 0;
}