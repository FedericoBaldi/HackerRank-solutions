# https://www.hackerrank.com/challenges/30-bitwise-and
int bitwiseAnd(int N, int K) {
    int max = -1;
    for (int indexFirst = 1; indexFirst <= N; indexFirst++) {
        for (int indexSecond = 1; indexSecond < indexFirst; indexSecond++) {
            int bitwAnd = indexFirst & indexSecond;
            if (bitwAnd > max && bitwAnd < K) {
                max = bitwAnd;
            }
        }
    }
    return max;
}