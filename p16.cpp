#include <iostream>
using namespace std;

const float pi=3.14;
void area(int a)
{
    int sum;
    sum=a*a;
    cout<<"squar area=="<<sum<<endl;
}

void area(int l,int b)
{
    int ans;
    ans =l*b;
     cout<<"rectangle area=="<<ans<<endl;
}


void area(float r)
{
    float ans;
    ans=pi*r*r;
      cout<<"cricle area=="<<ans<<endl;
}
int main()
{

    int length,breath;
    int a;
    float rad;

    cout<<"Enter the length::";
    cin>>length;

     cout<<"Enter the breath::";
    cin>>breath;
     area(length,breath);

    cout<<"Enter squar side ";
    cin>>a;
       area(a);
    cout<<"Enter radious ";
    cin>>rad;
    area(rad);
return 0;
}