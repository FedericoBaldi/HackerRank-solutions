// https://www.hackerrank.com/challenges/30-sorting
void bubbleSortModified(int n, vector<int> a)
{
    int numberOfSwaps = 0;
    for (int i = 0; i < n; i++) {
    // Track number of elements swapped during a single array traversal
    int numberOfSwaps2 = 0;
        for (int j = 0; j < n - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                numberOfSwaps++;
                numberOfSwaps2++;
            }
        }
        // If no elements were swapped during a traversal, array is sorted
        if (numberOfSwaps2 == 0) {
            break;
        }
    }
    cout << "Array is sorted in "<< numberOfSwaps << " swaps.\n";
    cout << "First Element: " << a[0] << "\n";
    cout << "Last Element: " << a[n-1];
}