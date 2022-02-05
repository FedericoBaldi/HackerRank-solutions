// https://www.hackerrank.com/challenges/sparse-arrays
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> results(queries.size(), 0);
    
    for (int indexQ = 0; indexQ < queries.size(); indexQ++){
        for (int indexS = 0; indexS < strings.size(); indexS++) {
            if (queries[indexQ] == strings[indexS]) {
                results[indexQ]++;
            }
        }
    }
    return results;
}