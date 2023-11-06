
// Rajpara Rahil
// diploma ce 3rd
// enroll no 71
#include <iostream>
using namespace std;

class temp
{

public:
    void minmax();
};
int main()
{
    temp s1;
    s1.minmax();

    return 0;
}
void temp::minmax()
{
    int a = 10, b = 20;
    if (a < b)
    {
        cout << " a is max...." << endl;
    }
    else
    {
        cout << "b is max....";
    }
}
