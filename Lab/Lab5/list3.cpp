#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<char> name = {'H', 'A', 'M', 'N', 'A'};

    cout << name.back();
    cout << endl;
    cout << name.front();
    return 0;
}