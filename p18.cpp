#include<iostream>
using namespace std;
 float area(float r,float pi=3.14)
 {
    return pi*r*r;
 }

int main()
{
    int rad;
    cout<<"Enter the radious::";
    cin>>rad;
    cout<<"area of the cricle  is::==="<<area(rad)<<endl;

}