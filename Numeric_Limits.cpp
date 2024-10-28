#include <iostream>
#include <format>
#include <limits>

using namespace std;
 
int main()
{
    cout<<"Int\n";
    cout<<format("Int max is {}\n", numeric_limits<int>::max());
    cout<<format("Int max is {}\n", numeric_limits<int>::max());
    cout<<format("Int max is {}\n", numeric_limits<int>::max());



    cout<<"Double\n";
    cout<<format("Int max is {}\n", numeric_limits<double>::max());
    cout<<format("Int max is {}\n", numeric_limits<double>::max());
    cout<<format("Int max is {}\n", numeric_limits<double>::max());


    return 0;
}



/*
Output:


Int
Int max is 2147483647
Int max is 2147483647
Int max is 2147483647
Double
Int max is 1.7976931348623157e+308
Int max is 1.7976931348623157e+308
Int max is 1.7976931348623157e+308
*/
