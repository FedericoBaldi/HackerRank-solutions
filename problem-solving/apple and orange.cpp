// https://www.hackerrank.com/challenges/apple-and-orange
int countDistance(int start, int stop, int tree, vector<int> fruits){
    int count = 0;
    for (int index = 0; index < fruits.size(); index++) {
        if (tree + fruits[index] >= start && tree + fruits[index] <= stop){
            count++;
        }
    }
    return count;
}
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    cout << countDistance(s, t, a, apples) << endl << countDistance(s, t, b, oranges);
}