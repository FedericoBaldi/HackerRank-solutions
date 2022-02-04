// https://www.hackerrank.com/challenges/array-left-rotation
vector<int> rotateLeft(int d, vector<int> arr) {
    vector<int> arrRotated(arr.size());
    for (int index = 0; index < arrRotated.size(); index++) {
        arrRotated[index] = arr[(index + d) % arr.size()];
    }
    return arrRotated;
}