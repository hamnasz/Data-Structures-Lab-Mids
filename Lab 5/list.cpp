#include <iostream>
#include <list>
using namespace std;

int main() {
    list <int> num = {1,2,3,4,5};
    for (int nams: num)
    cout << nams << endl;
        
    return 0;
}