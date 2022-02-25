# https://www.hackerrank.com/challenges/the-birthday-bar
int birthday(vector<int> s, int d, int m) {
    int ways = 0;
    for (int index = 0; index <= s.size() - m; index++) {
        int sumd = 0;
        for (int indexj = index; indexj < m + index; indexj++) {
            sumd += s[indexj];
        }
        if (sumd == d) {
            ways++;
        }
    }
    return ways;
}