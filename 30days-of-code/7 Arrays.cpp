// https://www.hackerrank.com/challenges/30-arrays
int n;
cin >> n;
cin.ignore(numeric_limits<streamsize>::max(), '\n');

string arr_temp_temp;
getline(cin, arr_temp_temp);

vector<string> arr_temp = split_string(arr_temp_temp);

vector<int> arr(n);

for (int i = 0; i < n; i++) {
	int arr_item = stoi(arr_temp[i]);

	arr[i] = arr_item;
}

for (int i = n-1; i >= 0; i--) {
	cout << arr[i] << " ";
}