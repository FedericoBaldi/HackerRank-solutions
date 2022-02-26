# https://www.hackerrank.com/challenges/divisible-sum-pairs
int divisibleSumPairs(int n, int k, vector<int> ar) {
    int nPairs = 0;
    for (int index = 0; index < ar.size(); index++) {
        for (int indexj = index+1; indexj < ar.size(); indexj++) {
            if ((ar[index] + ar[indexj]) % k == 0) {
                nPairs++;
            }
        }
    }
    return nPairs;
}