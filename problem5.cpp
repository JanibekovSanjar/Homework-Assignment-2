#include <iostream>

using namespace std;
int main() {
    double a;
    char b;
    double c;
    cin>>a>>b>>c;
    switch (b) {
        case '+' : cout<<a+c;
            break;
        case '-' : cout<<a-c;
            break;
        case '*' : cout<<a*c;
            break;
        case '/' : cout<<a/c;
            break;
        default:
            cout<<"Invalid Input";
    }
}
