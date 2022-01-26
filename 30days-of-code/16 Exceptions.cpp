// https://www.hackerrank.com/challenges/30-exceptions-string-to-integer
int main(){
    string S;
    cin >> S;
    int conv;
    try{
        conv = stoi(S);
        cout << conv;
    }
    catch(...){
        cout << "Bad String";
    }
    return 0;
}