#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<char> name = {'H', 'A', 'M', 'N', 'A'};
    for (int names : name)
        cout << names << endl;

    return 0;
}