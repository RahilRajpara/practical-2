#include<iostream>
using namespace std;


void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    cout << "Before swapping: num1 = " << num1 <<endl<< ", num2 = " << num2 << endl;

    // Calling the swap function with call by reference
    swap(num1, num2);
    cout << "addition = " << num1 + num2 << endl;

return 0;
}