// https://www.hackerrank.com/challenges/30-running-time-and-complexity
bool isPrime(int number){
    for (int index = 2; index <= sqrt(number); index++) {
            if (number % index == 0){
                return false;
            }
    }
    return true;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numbers;
    cin >> numbers;
    while (numbers-- > 0) {
        int test;
        cin >> test;
        if (!isPrime(test) || test <= 1) {
            cout << "Not prime\n";
        }
        else {
            cout << "Prime\n";
        }
    }
    return 0;
}
