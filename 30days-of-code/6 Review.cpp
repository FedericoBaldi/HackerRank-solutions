// https://www.hackerrank.com/challenges/30-review-loop
void separate(string separable) {
    string even;
    string odd;
    for (int i = 0; i < (int)separable.size(); i++) {
        if (i%2) {
            even += separable.at(i);            
        }
        else {
            odd += separable.at(i);
        }
    }
    cout << odd << " " << even << endl;
}