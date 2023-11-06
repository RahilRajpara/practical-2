#include <iostream>
using namespace std;
int num;
int& test();

int main() {

   test() = 10;

  cout <<"Return by Reference Value is ::"<<num;

  return 0;
}
int& test() {
  return num;
}
