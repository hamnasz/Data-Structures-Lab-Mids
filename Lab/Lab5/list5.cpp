#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<char> name = {'H', 'A', 'M', 'N', 'A'};

    name.push_back('H');
    cout << name.back();

    cout << name.front();
    return 0;
}