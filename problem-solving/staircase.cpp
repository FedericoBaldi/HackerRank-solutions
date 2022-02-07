# https://www.hackerrank.com/challenges/staircase
void staircase(int n) {
    for (int indexStairs = 1; indexStairs <= n; indexStairs++){
        for (int indexESpaces = indexStairs; indexESpaces < n; indexESpaces++){
            cout << " ";
        }
        for (int indexHasht = 0; indexHasht < indexStairs; indexHasht++){
            cout << "#";
        }
        cout << "\n";
    }
}