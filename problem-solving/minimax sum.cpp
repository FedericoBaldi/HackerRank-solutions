# https://www.hackerrank.com/challenges/mini-max-sum
void miniMaxSum(vector<int> arr) {
    int minIndex = 0;
    int maxIndex = 0;
    long minSum = 0;
    long maxSum = 0;
    for (int index = 1; index < arr.size(); index++){
        if (arr[minIndex] > arr[index]){
            minIndex = index;
        }
        if (arr[maxIndex] < arr[index]){
            maxIndex = index;
        }
    }
    for (int index = 0; index < arr.size(); index++) {
        if (index != maxIndex){
            maxSum += arr[index];
        }
        if (index != minIndex){
            minSum += arr[index];
        }
    }
    cout << maxSum << " " << minSum;
}