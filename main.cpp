#include <iostream>
#include <string>
#include <cstdlib>
#include "zespolone.h"

using namespace std;


int main ()
{
    //zainicjowanie generatora liczb losowych
    srand( time( NULL ) );
    Zespolone tab[10];

    //zmienna kończąca pętlę while
    int koniec=0;

    //wyświetlanie wylosowanych liczb
    for (int i=0; i<=9; i++)
    {
        cout << i;
    tab[i].wyswietl ();
}
      while (koniec == 0)
      {
    cout << endl << "Wpisz dzialanie jakie chcesz wykonać na tych liczbach(+,+=,*,*=,<,>,==,=) np.2+3" << endl;
    string dzialanie;
    cin >> dzialanie;

    if (dzialanie[0]>='0' && dzialanie[0]<='9')
    {
    if (dzialanie[2]!='=')
    {
        //Obsługa złego znaku na trzeciej pozycji stringa
        if (dzialanie[2]>='0' && dzialanie[2]<='9')
        {

        if(dzialanie[1]=='+')
        {
            cout << (tab[dzialanie[0]-'0']+tab[dzialanie[2]-'0'] );
        }
        if(dzialanie[1]=='*')
        {
            cout << tab[dzialanie[0]-'0']*tab[dzialanie[2]-'0'] ;
        }
        if(dzialanie[1]=='=')
        {
            cout << (tab[dzialanie[0]-'0']=tab[dzialanie[2]-'0']) ;
        }
        if(dzialanie[1]=='<')
        {
            if (tab[dzialanie[0]-'0']<tab[dzialanie[2]-'0'])
            {
                cout << "true";
            }
            else
            {
                cout << "false";
            }
        }
        if(dzialanie[1]=='>')
        {
            if (tab[dzialanie[0]-'0']>tab[dzialanie[2]-'0'])
            {
                cout << "true";
            }
            else
            {
                cout << "false";
            }
        }
    }
    }
    else
    {
        //Obsługa złego znaku na czwartej pozycji stringa
        if (dzialanie[3]>='0' && dzialanie[3]<='9')
        {
        if(dzialanie[1]=='+')
        {
            cout << (tab[dzialanie[0]-'0']+=tab[dzialanie[3]-'0']) ;
        }
        if(dzialanie[1]=='*')
        {
            cout << (tab[dzialanie[0]-'0']*=tab[dzialanie[3]-'0']) ;
        }
        if(dzialanie[1]=='=')
        {
            if (tab[dzialanie[0]-'0']==tab[dzialanie[3]-'0'])
            {
                cout << "true";
            }
            else
            {
                cout << "false";
            }
        }
    }
    }
    }
    else
    {
        koniec=1;
    }
}
    return 0;
}

