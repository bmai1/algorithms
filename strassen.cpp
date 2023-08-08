#include "../bits/stdc++.h"
using namespace std; 


vector<vector<int>> sqrMatMult(vector<vector<int>>& A, vector<vector<int>>& B) {
    int n = A.size();
    vector<vector<int>> C(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

// strassens is similar to recursion, but rather than eight recursive
// multiplications of n / 2 x n / 2 matrices, it does 7 and some constant additions
// way too confusing lol, moving on


int main() {
    vector<vector<int>> A = {{1,2,3,4},
                             {1,2,3,4},
                             {1,2,3,4},
                             {1,2,3,4}};

    vector<vector<int>> B = {{1,2,3,4},
                             {1,2,3,4},
                             {1,2,3,4},
                             {1,2,3,4}};

    vector<vector<int>> C = sqrMatMult(A, B);

    for (auto r : C) {
        for (auto c : r) {
            cout << c << ' ';
        }
        cout << endl;
    }
    return 0; 
}