# https://www.hackerrank.com/challenges/2d-array
int hourglassSum(vector<vector<int>> arr) {
    int maxSum = INT32_MIN;
    for (int i = 0; i < arr.size()-2; i++) {
        for (int j = 0; j < arr.size()-2; j++) {
            int sum = 0;
            sum += arr[i][j];
            sum += arr[i][j+1];
            sum += arr[i][j+2];
            sum += arr[i+1][j+1];
            sum += arr[i+2][j];
            sum += arr[i+2][j+1];
            sum += arr[i+2][j+2];
            if(sum > maxSum){
				maxSum = sum;
            }
        }
    }
    return maxSum;
}