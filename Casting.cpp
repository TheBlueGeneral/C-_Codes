//Static casting in C++ can be done in 3 ways.
//First method is overholder cast that is derived from C++. It is not advised but it is still commonly used. The second is rarely used. The last is quite verbose but is the cleanest and a recommended one as well.
#include <iostream>
#include <format>
#include <limits>
using namespace std;
int main() {
    float myFloat { 3.14f };
    int i1 { (int)myFloat };
    int i2 { int(myFloat) };
    int i3 { static_cast<int>(myFloat) };
    cout << i1 << endl;
    cout << i2 << endl;
    cout << i3 << endl;
    return 0;
}
