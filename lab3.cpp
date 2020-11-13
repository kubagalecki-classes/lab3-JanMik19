#include <iostream>

using namespace std;

class Figura
{
private: // zadanie 5
    double pole;
public:
    Figura(double p) { pole = p; }
    double get_pole() const { return pole; }
    void id() const { cout << "Figura o polu " << pole << '\n'; } // zadanie 8
};

// zadanie 3
class Kolo : Figura
{
    //double promien;
public:
    Kolo(double r) : Figura{ 3.14 * pow(r, 2) } // zadanie 7
    {
        //pole = 3.14 * pow(r, 2); // zadanie 4
    }
    void id() const { cout << "Kolo o polu " << get_pole() << '\n'; } // zadanie 8
};

class Kwadrat : Figura
{
    //double bok;
public:
    Kwadrat(double b) : Figura{ pow(b, 2) } // zadanie 7
    {
        //pole = pow(b, 2); // zadanie 4
    }
    void id() const { cout << "Kwadrat o polu " << get_pole() << '\n'; } // zadanie 8
};

void id(const Figura& obj) // zadanie 9
{
    obj.id();
}
