// https://www.hackerrank.com/challenges/30-dictionaries-and-maps
int main() {
    int n;
    string aux;
    getline(cin, aux);
    n = stoi(aux);
    map<string, string> phonebook;
    for (int i = 0; i < n; i++) {
        getline(cin, aux);
        string name;
        string number;
        istringstream iss(aux);
        iss >> name;
        iss >> number;
        phonebook[name] = number;
    }
    
    while (cin >> aux) {
        string number = phonebook[aux];
        if (number.empty()){
            cout << "Not found" << endl;
        }
        else {
            cout << aux << "=" << number << endl;
        }
    }
    
    return 0;
}