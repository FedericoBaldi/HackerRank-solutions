// https://www.hackerrank.com/challenges/30-conditional-statements
int N;
cin >> N;
cin.ignore(numeric_limits<streamsize>::max(), '\n');

if (N%2 != 0){
	cout << "Weird";
}
else if ((N>=2 && N<=5) || N > 20){
	cout << "Not Weird";
}
else {
	cout << "Weird";
}