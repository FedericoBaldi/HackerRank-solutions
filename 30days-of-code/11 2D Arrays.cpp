// https://www.hackerrank.com/challenges/30-2d-arrays
int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int max = INT32_MIN;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int count = 0;
            count += arr[i][j];
            count += arr[i][j+1];
            count += arr[i][j+2];
            count += arr[i+1][j+1];
            count += arr[i+2][j];
            count += arr[i+2][j+1];
            count += arr[i+2][j+2];
            if (count > max) {
            max = count;
            }
        }
    }
    cout << max;

    return 0;
}