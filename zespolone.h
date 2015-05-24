#ifndef ZESPOLONE_H
#define ZESPOLONE_H

#include <iostream>

using namespace std;

class Zespolone
{
    float r;
    float i;

public:

    Zespolone();
    Zespolone(Zespolone& z);

    float modul ();

    void wyswietl();

// Przeciążanie operatorów

    Zespolone operator+(const Zespolone &op);

    Zespolone operator+=(const Zespolone &op);

    Zespolone operator*(const Zespolone &op);

    Zespolone operator*=(const Zespolone &op);

    bool operator<(const Zespolone &op);

    bool operator>(const Zespolone &op);

    bool operator==(const Zespolone &op);

    friend ostream& operator<<(ostream &os, const Zespolone &op);

    Zespolone operator=(const Zespolone &op);
    };

#endif // ZESPOLONE_H
