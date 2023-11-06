#include<iostream>
using namespace std;

// Function with default argument
void printNumber(int num = 11) {
   cout << "Number: " << num << std::endl;
}

int main() 
{
    // Calling the function without providing an argument
    printNumber();  // Uses the default value 0


    printNumber(42);

    return 0;
}





