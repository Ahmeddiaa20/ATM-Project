#include <iostream>
#include <string>
using namespace std;
#include "../Header.h/Types.h"
#include "../Header.h/Balance.h"
#include "../Header.h/Call.h"
int main() {
    ATM atm(1000, "2004"); // Initialize ATM with $1000 and PIN 2004

    if (atm.authenticate()) {
        atm.displayMenu();
    } else {
        cout << "Invalid PIN. Exiting.\n";
    }
    return 0;
}
