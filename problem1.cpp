#include <iostream>

using namespace std;
int main()
{
    long int a;
    cin >> a;
    if(a < 2147483647 && a > -2147483647) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
