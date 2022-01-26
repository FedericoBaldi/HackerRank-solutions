// https://www.hackerrank.com/challenges/30-generics
template <typename T>
void printArray(vector<T> vect)
{
    for (int index = 0; index < vect.size(); index++) {
     cout << vect[index] << "\n";
    }
}