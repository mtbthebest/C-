#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    std::cout << "Inputing values: " <<endl;
    char value;
    string name;
    // cin >> value;
    // cin >> name ;

    // cout << name;
    // cout << value;
    string word,rest;
    cin.get();
    cin >> word;
    getline(cin, rest,'!');
    cout << "Word: " <<word << endl;
    cout << "Rest: "<< rest << endl;


    return 0;
}
