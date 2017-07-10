#ifndef MODEM_HPP_INCLUDED
#define MODEM_HPP_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Modem
{
    string name;
    string manufacturer;
    string type;
    int price;
    bool internalisers;
    public:
        enum interface {
            COM = 1, ExpressCard, PSI, PCMCIA, USB
        };
        interface connector;
        Modem ();
        Modem (const string name, const string type, const interface connector, const string manufacturer, const int price, const bool flag);
        ~Modem();
        void setName (const string name);
        void setManufacturer ( const string manufacturer);
        void setType (const string type);
        void setConn (const interface conn);
        void setPrice (const int price);
        void setBool (const bool flag);


        string getName () const {
			return name;
		}
        string getType () const {
			return type;
		}
        interface getConn () const {
			return connector;
		}
        string getManufacturer () const {
			return manufacturer;
		}
        int getPrice () const {
			return price;
		}
        bool getBool () const {
			return internalisers;
		}

        friend ostream& operator << (ostream& os, const Modem& mom);
};

#endif // MODEM_HPP_INCLUDED
