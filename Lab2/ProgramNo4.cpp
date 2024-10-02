#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> names = {"Hamna", "Yumna", "Mishal", "Fizza"};

    names[1] = "Ayesha";

    cout << names[3];
    return 0;
}
