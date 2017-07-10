#include <iostream>
#include <string>

#include "modem.cpp"

using namespace std;

int main()
{
    Modem modem_menu ("DSL-2520U", "ADSL", Modem::COM, "D-link", 1914, false);
    cout << modem_menu << endl;
    
    int str = modem_menu.getPrice();    
    cout << str << endl;
    
    getchar ();
    
    return 0;
}
