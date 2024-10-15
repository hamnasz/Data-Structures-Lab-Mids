#include <iostream>
using namespace std;

int main()
{

    string marks[6][2] = {
        {"urdu","10"},
        {"English", "9.5"},
        {"Maths", "9"},
        {"Science", "8"},
        {"History", "7"},
        {"Geography", "6"}
    };

    for (int i = 0; i < 6; i++)
    {
        cout << "Student " << i + 1 << " Subject: ";
        for (int j = 0; j < 2; j++)
        {
            cout << marks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}