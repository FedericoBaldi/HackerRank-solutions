# https://www.hackerrank.com/challenges/between-two-sets
int getTotalX(vector<int> a, vector<int> b) {
    int totalN = 0;
    for (int indexCandidates = a[a.size()-1]; indexCandidates <= b[b.size()-1]; indexCandidates++) {
        bool isOk = true;
        for (int index = 0; index < a.size(); index++) {
            if (indexCandidates % a[index]  != 0){
                isOk = false;
            }
        }
        for (int index = 0; index < b.size(); index++) {
            if (b[index] % indexCandidates != 0){
                isOk = false;
            }
        }
        if (isOk == true) {
            totalN++;
        }
    }
    return totalN;
}