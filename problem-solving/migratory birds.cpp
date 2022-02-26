// https://www.hackerrank.com/challenges/migratory-birds
int migratoryBirds(vector<int> arr) {
    map<int,int> birds;
    int seenBird;
    int maxBird = 0;
    for (int index = 0; index < arr.size(); index++) {
        birds[arr[index]]++;
    }
    for (auto it = birds.begin(); it != birds.end(); it++) {
        if (it->second > maxBird) {
            maxBird = it->second;
            seenBird = it->first;
        }
    }
    return seenBird;
}