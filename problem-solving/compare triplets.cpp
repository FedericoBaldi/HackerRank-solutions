# https://www.hackerrank.com/challenges/compare-the-triplets
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> scores(2, 0);
    if (a.size() == b.size()){
        for (int index = 0; index < a.size(); index++) {
            if (a[index] > b[index]){
                scores[0]++; //increment Bob score
            }
            else if (a[index] < b[index]){
                scores[1]++; //increment Ali score
            }
        }
    }
    return scores;
}