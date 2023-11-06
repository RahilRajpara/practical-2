#include <iostream>
using namespace std;
// Function that swaps two integers using call by reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Calling the swap function with call by reference
    swap(num1, num2);

    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
