#include<iostream>
using namespace std;

void cricle(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
       int no1 =10,no2=20;
       cout<<"befor swaplng  ::"<<endl<<"no1="<<no1<<endl<<"no2=="<<no2<<endl;
    cricle(no1,no2);
     cout<<"after swaplng  ::"<<endl<<"no1="<<no1<<endl<<"no2=="<<no2<<endl;
 return 0;
}


