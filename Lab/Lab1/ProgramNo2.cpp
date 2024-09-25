#include <iostream>
using namespace std;
int main ()
{
    string subjects[7] = {"Urdu = 50","English = 70", "Math = 80", "Physics = 40", "Chemistry = 60", "Islamiat = 90", "Ai = 20"};

    for (int i = 0; i<7; i++)
    {
        cout << subjects[i] << " ";
    }
}
