#include <iostream>
using namespace std;
int main()
{
    int matrix[2][3];

    cout << "Enter Values in array: ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
