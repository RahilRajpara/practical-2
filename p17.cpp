#include<iostream>
using namespace std;

void findMax(int a, int b) {
    int sum;
    sum= (a > b) ? a : b;
    cout<<"maximum number is ::>>>"<<sum<<endl;

}

// Function to find the maximum of two doubles
void findMax(float a, float b) {
    float sum;
    
    sum= (a > b) ? a : b;
    cout<<"maximum number is ::>>>"<<sum<<endl;
}
int main()
{

    int no1,no2;
    float n1,n2;
     cout<<"Enter the integer number::";
     cin>>no1;
      cout<<"Enter the integer number::";
     cin>>no2;
     findMax(no1,no2);
      cout<<"Enter the integer number::";
     cin>>n1;
       cout<<"Enter the integer number::";
     cin>>n2;
     findMax(n1,n2);


}