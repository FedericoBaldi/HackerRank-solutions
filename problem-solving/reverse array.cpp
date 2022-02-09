// https://www.hackerrank.com/challenges/arrays-ds/problem
vector<int> reverseArray(vector<int> a) {
    int length = a.size();
    vector<int> reversedArray (length);
    for (int index = 0; index < length/2; index++) {
        reversedArray[index] = a[length - index - 1];
        reversedArray[length - index - 1] = a[index];
    }
    if (length%2 != 0) {
        reversedArray[length/2] = a[length/2];
    }
    return reversedArray;
}