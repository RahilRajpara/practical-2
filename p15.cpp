#include<iostream>
using namespace std;


 inline int squar(int num)
{
    int sum;
    sum=num*num;
    cout<<"cube of given number is::"<<sum;
}
int main()
{
    int number;

    cout<<"Enter the number ::";
    cin>>number;
    squar(number);
    
return 0;
}