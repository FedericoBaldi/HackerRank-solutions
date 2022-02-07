# https://www.hackerrank.com/challenges/diagonal-difference
int diagonalDifference(vector<vector<int>> arr) {
    int diagDiff = 0;
    for (int index = 0; index < arr.size(); index++){
        diagDiff += arr[index][index];
        diagDiff -= arr[index][arr.size()-index-1];
    }
    return abs(diagDiff);
}