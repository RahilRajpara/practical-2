// Rajpara Rahil
// diploma ce 3rd
// enroll no 71
#include <iostream>
#include <iomanip>
using namespace std;

 enum day{Monday,Tuesday,Wednestday,Thuresday,Friday,Satuarday,Sunday};
int main()
{
    day today=Wednestday;
    
        switch (today) {
        case Sunday:
            cout << "It's Sunday!" << std::endl;
            break;
        case Monday:
            cout << "It's Monday!" << std::endl;
            break;
        case Wednestday:
         cout << "It's Wednesday!" << std::endl;
            break;
        // ... and so on for other days
        default:
            cout << "It's not a special day." << std::endl;
    }

return 0;
}