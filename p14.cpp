#include<iostream>
using namespace std;

 inline int cube(int num)
{
    int sum;
    sum=num*num*num;
    cout<<"cube of given number is::"<<sum;
}
int main()
{
    int number;

    cout<<"Enter the number ::";
    cin>>number;
    cube(number);
    
return 0;
}