#include <iostream>
using namespace std;
const int s = 50;
int arr[s];
int count = 0;

void creat(int v)
{
    if (count < s)
    {
        arr[count++] = v;
    }
    else
        cout << "full";
}

void printarray()
{
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void delEND()
{
    if (count > 0)
    {
        count--;
    }
    else
    {
        cout << "Array is empty" << endl;
    }
}

void delBEGIN()
{
    if (count > 0)
    {
        for (int i = 0; i < count - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        count--;
    }
    else
    {
        cout << "Array is empty" << endl;
    }
}

void delMID(int pos)
{
    if (pos >= 0 && pos < count)
    {
        for (int i = pos; i < count - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        count--;
    }
    else
    {
        cout << "Invalid position" << endl;
    }
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int v;
        cin >> v;
        creat(v);
    }

    cout << "Original array: ";
    printarray();

    delEND();
    cout << "After deleting from end: ";
    printarray();

    delBEGIN();
    cout << "After deleting from beginning: ";
    printarray();

    delMID(1);
    cout << "After deleting from middle: ";
    printarray();

    return 0;
}