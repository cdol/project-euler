#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

long long int Ways(int row, int col, vector<vector<long long int> >& memo) {
    if (memo[row][col] == -1) {
        memo[row][col] = Ways(row - 1, col, memo) + Ways(row, col - 1, memo);
    }
    return memo[row][col];
}

int main() {
    int N = 20;
    vector<vector<long long int> > memo(N + 1, vector<long long int>(N + 1, -1));
    for (int i = 0; i <= N; i++) {
        memo[0][i] = 1;
        memo[i][0] = 1;
    }
    cout << Ways(20, 20, memo) << endl;
    
    return 0;
}
