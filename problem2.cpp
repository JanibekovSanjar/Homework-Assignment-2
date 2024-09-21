#include <iostream>

using namespace std;
int main() {
    bool x,y;
    cin>>x>>y;
    if((x == 1 && y == 1)||(x == 1 && y == 0)) {
        cout << "Bus" << endl;
    }
    else if(x == 0 && y == 1) {
        cout << "Walk" << endl;
    }
    else {
        cout << "Bike" << endl;
    }

    return 0;
}