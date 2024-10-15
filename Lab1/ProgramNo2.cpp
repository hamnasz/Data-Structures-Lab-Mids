#include <iostream>
using namespace std;
int main ()
{
    string subjects[7] = {"Urdu","English", "Math", "Physics", "Chemistry", "Islamiat", "Ai"};
    int number[7] = {10,30,50,70,90,110,130};

    for (int i = 0; i<7; i++)
    {
        cout << subjects[i] << " " << number[i];
    }
}