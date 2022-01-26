// https://www.hackerrank.com/challenges/30-data-types
// Declare second integer, double, and String variables.
int iin;
double din;
string sin;
string aux;
// Read and save an integer, double, and String to your variables.
getline(cin, aux);
iin = stoi(aux);
getline(cin, aux);
din = stod(aux);
getline(cin, sin);
// Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

// Print the sum of both integer variables on a new line.
printf("%i\n", i + iin);
// Print the sum of the double variables on a new line.
printf("%.1f\n", d + din);
// Concatenate and print the String variables on a new line
cout << s << sin << endl;
// The 's' variable above should be printed first.