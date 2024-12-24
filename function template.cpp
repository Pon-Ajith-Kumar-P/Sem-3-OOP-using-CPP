#include <iostream>
using namespace std;

// Template function to sort an array with a comparator
template <typename T, typename Comp>
void sortArray(T arr[], int n, Comp comp) 
{
    for (int i = 0; i < n - 1; ++i) 
    {
        for (int j = i + 1; j < n; ++j) 
        {
            if (comp(arr[i], arr[j])) 
            {  
            // Use comparator to decide order
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Template function to search an element in an array with a comparator
template <typename T, typename Comp>
int search(T arr[], int n, T key, Comp comp) 
{
    for (int i = 0; i < n; ++i) 
    {
        if (comp(arr[i], key)) 
        {  // Use comparator to compare values
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

// Comparator function for ascending order
template <typename T>
bool ascending(T a, T b) 
{
    return a > b;  // If a > b, swap them to order in ascending
}

// Comparator function for descending order
template <typename T>
bool descending(T a, T b) 
{
    return a < b;  // If a < b, swap them to order in descending
}

int main() 
{
    int n;

    // Integer array operations
    cout << "Enter the number of elements in the integer array: ";
    cin >> n;
    int arr1[n];
    cout << "Enter " << n << " elements for the integer array: ";
    for (int i = 0; i < n; ++i) 
    {
        cin >> arr1[i];
    }

    // Sorting integer array in ascending order
    sortArray(arr1, n, ascending<int>);

    cout << "Sorted integer array (ascending): ";
    for (int i = 0; i < n; ++i) 
    {
        cout << arr1[i] << "\t";
    }
    cout << endl;

    // Sorting integer array in descending order
    sortArray(arr1, n, descending<int>);

    cout << "Sorted integer array (descending): ";
    for (int i = 0; i < n; ++i) {
        cout << arr1[i] << "\t";
    }
    cout << endl;

    int key1;
    cout << "Enter the integer value to search: ";
    cin >> key1;

    int res1 = search(arr1, n, key1, ascending<int>);
    if (res1 != -1) 
    {
        cout << "Element " << key1 << " found at index " << res1 << " in integer array" << endl;
    } 
    else 
    {
        cout << "Element " << key1 << " not found in integer array" << endl;
    }


    // Double array operations
    cout << "\nEnter the number of elements in the double array: ";
    cin >> n;
    double arr2[n];
    cout << "Enter " << n << " elements for the double array: ";
    for (int i = 0; i < n; ++i) 
    {
        cin >> arr2[i];
    }

    // Sorting double array in ascending order
    sortArray(arr2, n, ascending<double>);

    cout << "Sorted double array (ascending): ";
    for (int i = 0; i < n; ++i) 
    {
        cout << arr2[i] << "\t";
    }
    cout << endl;

    // Sorting double array in descending order
    sortArray(arr2, n, descending<double>);

    cout << "Sorted double array (descending): ";
    for (int i = 0; i < n; ++i) 
    {
        cout << arr2[i] << "\t";
    }
    cout << endl;

    double key2;
    cout << "Enter the double value to search: ";
    cin >> key2;

    int result2 = search(arr2, n, key2, ascending<double>);
    if (result2 != -1) 
    {
        cout << "Element " << key2 << " found at index " << result2 << " in double array" << endl;
    } else 
    {
        cout << "Element " << key2 << " not found in double array" << endl;
    }

    return 0;
}
