# https://www.hackerrank.com/challenges/breaking-best-and-worst-records
vector<int> breakingRecords(vector<int> scores) {
    vector<int> records(2,0);
    int min = scores[0];
    int max = scores[0];
    for (int index = 1; index < scores.size(); index++) {
        if (scores[index] > max) {
            max = scores[index];
            records[0]++;
        }
        else if (scores[index] < min){
            min = scores[index];    
            records[1]++;
        }
    }
    return records;
}
