#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, x, count = 0;
    cout << "Enter Size of Array: ";
    cin >> n;

    cout << "Enter Values of Array (in sorted order): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter Value to Search: ";
    cin >> x;
    int low = 0, high = n - 1, result = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            result = mid;
            break;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (result != -1)
    {
        cout << "Value found at Index: " << result << endl;
        for (int i = result - 1; i >= 0 && arr[i] == x; i--)
            count++;

        for (int i = result + 1; i < n && arr[i] == x; i++)
            count++;

        cout << "Value Duplicated in Array " << count << " Times";
    }
    else
    {
        cout << "Value not found in the array.";
    }
    return 0;
}