#include <iostream>
#include <string>

#include "modem.hpp"

using namespace std;

Modem::Modem (const string name, const string type, const interface connector, const string manufacturer, const int price,const bool flag) {
    setName (name);
    setType (type);
    setConn (connector);
    setManufacturer (manufacturer);
    setPrice (price);
    setBool (flag);
}
void Modem::setType (const string type) {
    this->type = type;
}

void Modem::setConn (const interface conn) {
    connector = conn;
}
void Modem::setName (const string name) {
    this->name = name;
}

void Modem::setManufacturer (const string manufacturer) {
    this->manufacturer = manufacturer;
}

void Modem::setPrice (const int price) {
    this->price = price;
}
void Modem::setBool (const bool flag) {
    internalisers = flag;
}

Modem::~Modem () {

}

ostream& operator<<(ostream& stream, const Modem& mod) {
    stream << "  1. Название модема: " << mod.name << endl;
    stream << "  2. Производитель модема: " << mod.manufacturer << endl;
    stream << "  3. Тип модема: " <<  mod.type << endl;
    stream << "  4. Стоимость модема: " << mod.price << endl;
    string integral = "";
    switch (mod.getBool ()) {
        case true: integral = "Да"; break;
        case false: integral = "Нет"; break;
    }
    stream << "  5. Встроенный модем: " << integral << endl;
    string Conn = "";
    switch (mod.getConn()) {
        case 1: Conn = "COM"; break;
        case 2: Conn = "ExpressCard"; break;
        case 3: Conn = "PSI"; break;
        case 4: Conn = "PCMCIA"; break;
        case 5: Conn = "USB"; break;
    }
    stream << "  6. Интерфейс модема: " << Conn << endl;

    return stream;
}
