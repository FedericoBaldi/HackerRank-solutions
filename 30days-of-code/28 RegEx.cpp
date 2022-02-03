# https://www.hackerrank.com/challenges/30-regex-patterns
int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));
    vector<string> matches;
    for (int N_itr = 0; N_itr < N; N_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        string firstName = first_multiple_input[0];

        string emailID = first_multiple_input[1];
        if (regex_match(emailID, regex(".*\@gmail\.com"))){
            matches.push_back(firstName);
        }
    }
    sort(matches.begin(), matches.end());
    for (int index=0; index < matches.size(); index++){
        cout << matches.at(index) << endl;
    }

    return 0;
}