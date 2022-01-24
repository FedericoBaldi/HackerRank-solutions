// https://www.hackerrank.com/challenges/dynamic-array
void print2DVector(vector<vector<int>> ddVector) { // easy support function for debug
    for (auto it : ddVector) {
        for (auto ij : it) {
            cout << ij << " ";
        }
    cout << endl;
    }
}

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
	vector<vector<int>> resultsArray (n);
	vector<int> answers;
	int lastAnswer = 0;
	
	for (int index = 0; index < queries.size(); index++) {
		int idx = (queries[index][1]^lastAnswer)%n;
		int y = queries[index][2];
		if (queries[index][0] == 1) {
			resultsArray[idx].push_back(y);
		}
		else {
			answers.push_back(resultsArray[idx][y%resultsArray[idx].size()]);
			lastAnswer = answers.back();
		}
		//print2DVector(resultsArray);
	}
	return answers;
}