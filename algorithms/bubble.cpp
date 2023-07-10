// O(n^2) time (worst)
// O(1) space

// popular but inefficient
// repeatedly swaps adjacent elements

#include "../bits/stdc++.h"
using namespace std; 

int main() {
    vector<int> A = { 5,2,4,6,1,3 };
    // worse version from algorithms book
    // for (int i = 0; i < A.size(); ++i) {
    //     for (int j = A.size() - 1; j > i; --j) {
    //         if(A[j] < A[j - 1]) {
    //             swap(A[j], A[j - 1]);
    //         }
    //     }
    // }

    bool swapped;
    // algorithm goes here
    for (int i = 0; i < A.size() - 1; ++i) {
        swapped = false;
        for (int j = 0; j < A.size() - i - 1 ; ++j) {
            if (A[j] > A[j + 1]) {
                swap(A[j], A[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }

    for (int n : A) {
        cout << n;
    }
    cout << endl;

    return 0; 
}