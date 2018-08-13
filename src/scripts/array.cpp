#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int MAXCNT = 10;
    float arr[MAXCNT], x;
    int i, cnt;
    // Constant
    // Array, temp. variable
    // Index, quantity
    cout << "Enter up to 10 numbers \n"
         << "(Quit with a letter):" << endl;
    for (i = 0; i < MAXCNT && cin >> x; ++i)
        arr[i] = x;
    for (i = 0; i < cnt; ++i)
        cout << setw(10) << arr[i];
    return 0;
}