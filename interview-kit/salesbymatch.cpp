// https://www.hackerrank.com/challenges/sock-merchant/
int sockMerchant(int n, vector<int> ar) {
    vector<int> colors;
    for(int i = 0; i < n; i++){
        bool isUnique = true;
        int j = 0;
        while (isUnique && j < colors.size()){
            if (ar[i] == colors[j])
            {
                isUnique = false;
            }
            j++;
        }
        if (isUnique){
            colors.push_back(ar[i]);
        }
        else {
            colors.erase(colors.begin()+j-1);
        }
    }
    return (n - colors.size())/2;
}