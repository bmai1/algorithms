// O(n^2) worst / average, O(n) best case
// O(1) space

// similar to sorting cards
// split into sorted and unsorted part
// unsorted values inserted into correct position
// efficient for sorting small number of elements

#include "../bits/stdc++.h"
using namespace std; 

int main() {
    vector<int> A = { 5,2,4,6,1,3 };

    for (int i = 1; i < A.size(); ++i) {
        int key = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            --j;
        }
        A[j + 1] = key;
    }

    for (int n : A) {
        cout << n;
    }
    cout << endl;
    
    return 0; 
}