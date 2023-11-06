#include<iostream>
using namespace std;
 int  no1=11;
int main ()
{
    int no1=22;

    cout<<"no1=="<<::no1<<endl;
    cout<<"no2=="<<no1<<endl;

       cout<<"addition using scop resolution operator:::"<<no1+::no1;
 return 0;
}