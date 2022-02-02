// https://www.hackerrank.com/challenges/30-nested-logic
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int dReturned, mReturned, yReturned, dDue, mDue, yDue;
    cin >> dReturned;
    cin >> mReturned;
    cin >> yReturned;
    cin >> dDue;
    cin >> mDue;
    cin >> yDue;
    
    if (yReturned > yDue){
        cout << 10000;
    }
    else if(yReturned < yDue){
        cout << 0;
    }
    else if(mReturned > mDue){
        cout << 500 * (mReturned-mDue);
    }
    else if(mReturned < mDue){
        cout << 0;
    }
    else if (dReturned > dDue) {
        cout << 15 * (dReturned-dDue);
    }
    else {
        cout << 0;
    }
    return 0;
}
