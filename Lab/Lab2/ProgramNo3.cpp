#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> name;

    name.push_back("Hamna");
    name.push_back("Yumna");
    name.push_back("Mishal");

    cout << "Group 'Compassionate Chuay': ";
    for (int i = 0; i < name.size(); i++)
    {
        cout << name[i] << " ";
    }
    cout << endl;

    name.pop_back();
    cout << "Present Students: ";
    for (int i = 0; i < name.size(); i++)
    {
        cout << name[i] << " ";
    }
    cout << endl;
    return 0;
}
