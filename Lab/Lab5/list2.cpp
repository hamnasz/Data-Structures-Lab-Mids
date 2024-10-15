#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<char> name = {'H', 'A', 'M', 'N', 'A'};
    for (char names : name){
        cout << names << endl;
    }
    return 0;
}