// https://www.hackerrank.com/challenges/30-binary-numbers
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int maxN = 0;
    int rest = 0;
    int one = 0;
    while (n != 0) {
        if(n%2){
            one++;
        }
        else {
            one = 0;
        }
        n = n/2;
        if (one > maxN){
            maxN = one;
        }
    }
    
    cout << maxN;
    return 0;
}