// https://www.hackerrank.com/challenges/kangaroo
// they are like 2 lines (y=mx+q), you need to find the intersection
string kangaroo(int x1, int v1, int x2, int v2) {
    string isPossible = "NO";
    if (v1 > v2) {
        if ((x1 - x2) % (v2 - v1) == 0){ 
            isPossible = "YES";
        }
    }
    return isPossible;
}