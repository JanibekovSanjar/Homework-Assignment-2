// #include <iostream>
//
// using namespace std;
// int main() {
//     int n1;
//     int n2;
//     int n3;
//     int n4;
//     cin >> n1 >> n2 >> n3 >> n4;
//     if(n1 == n2 && n3 == n4 && n2 == n3) {
//         cout << 3 << endl;
//     }
//     else if ((n1 == n2 && n2 == n3) || (n1 == n2 && n2 == n4) || (n1 == n3 && n3 == n4) || (n2 == n3 && n3 == n4)) {
//         cout << 2 << endl;
//     }
//     else if ((n1 == n2 && n3 == n4) || (n1 == n3 && n2 == n4) || (n1 == n4 && n2 == n3)) {
//         cout << 2 << endl;
//     }
//     else if(n1 != n2 && n3 != n4 && n2 != n3 && n1 != n3 && n2 != n4 && n1 != n4) {
//         cout << 0 << endl;
//     }
//     else if (n1 == n2 || n1 == n3 || n1 == n4 || n2 == n3 || n2 == n4 || n3 == n4) {
//         cout << 1 << endl;
//     }
// }