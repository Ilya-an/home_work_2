#include "modem.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Modem modem_menu ("DSL-2520U", "ADSL", Modem::COM, "D-link", 1914, false);
    cout << modem_menu;
    int str = modem_menu.getPrice();
    getchar ();
    return 0;
}
