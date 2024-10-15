#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> flower = {"Rose", "Jasmine", "Lilly", "Daisy"};

    // Change the value of the first element
    flower.at(0) = "Daffodils";

    cout << flower.at(0);
    return 0;
}