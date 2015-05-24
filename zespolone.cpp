#include <iostream>
#include <math.h>
#include "zespolone.h"
#include <cstdlib>
using namespace std;

// konstruktor z losowaniem
Zespolone::Zespolone()
{
    r = (rand()% 21) -10;
    i = (rand()% 21) -10;
}

// konstruktor kopiujący
Zespolone::Zespolone(Zespolone &z)
{
    r=z.r;
    i=z.i;
}

float Zespolone::modul()
{
    float modul;
    modul=sqrt(r*r+i*i);
    return modul;
}

void Zespolone::wyswietl()
{
    cout << " liczba zespolona: " << r << " " << i << "i" << endl;
}

// przeciążanie operatorów

Zespolone Zespolone::operator+(const Zespolone &op) {
    Zespolone rs;
    rs.r = r+op.r;
    rs.i = i+op.i;
    return rs;
    }

Zespolone Zespolone::operator+=(const Zespolone &op)
{
        r+=op.r;
        i+=op.i;
        return *this;
}

Zespolone Zespolone::operator *(const Zespolone &op)
{
    Zespolone rs;
    rs.r=(r*op.r)-(i*op.i);
    rs.i=(i*op.r)+(r*op.i);
    return rs;
}

Zespolone Zespolone::operator *=(const Zespolone &op)
{
    float tmp_r;
    tmp_r=r;
    r=(r*op.r)-(i*op.i);
    i=(i*op.r)+(tmp_r*op.i);
    return *this;
}


//Porównanie modułów liczb zespolonych,samych liczb nie da się porównać.

bool Zespolone::operator <(const Zespolone &op)
{
    if(modul()<sqrt(op.r*op.r+op.i*op.i))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Zespolone::operator >(const Zespolone &op)
{
    if(modul()>sqrt(op.r*op.r+op.i*op.i))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Zespolone::operator==(const Zespolone &op)
{
     if(r==op.r&&i==op.i)
     return true;
     else
     return false;
}

ostream& operator<<(ostream &os, const Zespolone &op)
{
    os << op.r << " " << op.i << "i";
    return os;
    }

Zespolone Zespolone::operator=(const Zespolone &op){
        r=op.r;
        i=op.i;
        return *this;
        }

