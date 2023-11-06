// Rajpara Rahil
// diploma ce 3rd
// enroll no 71

#include <iostream>
using namespace std;
int n1 = 10; // global variable
int main()
{
    int n1 = 20;
    cout << " The gloabal variable value is ::" <<::n1 << endl; // use scopresolution operator
    cout << " The loacal variable valuue is ::" << n1 << endl;

    return 0;
}