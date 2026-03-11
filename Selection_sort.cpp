
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 1, 23, 43, 3, 9, -1, 0};
    cout << "Before Sorting :";

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        cout << i << ",";
    }
    cout << "}" << endl;

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        for (int k = min; k > i; k--)
        {
            arr[k] = arr[k - 1];
        }
        arr[i] = temp;
    }
    cout << "Sorted array: ";
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << "}";
    cout << endl;

    return 0;
}