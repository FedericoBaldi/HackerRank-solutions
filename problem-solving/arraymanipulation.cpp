// https://www.hackerrank.com/challenges/crush
long arrayManipulation(int n, vector<vector<int>> queries) {
    long max = -1;
    long arr[n+1];
    for (long i = 0; i <= n; i++)
        arr[i] = 0;
    for (long i = 0; i < queries.size(); i++) {
        long a = queries[i][0];
        long b = queries[i][1];
        long k = queries[i][2];
        arr[a-1] += k;
        arr[b] -= k;
    }
    long sum = 0;
    for(long i=0; i<=n; i++){
        sum += arr[i];
        if(sum > max)
            max = sum;
    }
    return max; 
}