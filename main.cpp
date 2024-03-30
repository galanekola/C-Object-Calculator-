#include <iostream>
#include <math.h>
#include <vector>

using namespace std;


class Calculator
{
public:

    int a;
    int b;
    int c;
    vector<int>rejestr;
    int d;

    int dodaj ()
    {
    int wynik;
    wynik = a+b;
    rejestr.push_back(wynik);
    return wynik;
    }

    int odejmij ()
    {
    int wynik;
    wynik = a-b;
    rejestr.push_back(wynik);
    return wynik;
    }

    int pomnoz ()
    {
    int wynik;
    wynik = a*b;
    rejestr.push_back(wynik);
    return wynik;
    }

    int podziel ()
    {
        if (b == 0)
        {
            cout<<"Nie mozna podzielic przez 0"<<endl;
            return -1;
        }
    int wynik;
    wynik = a/b;
    rejestr.push_back(wynik);
    return wynik;
    }
    int potegi ()
    {
        int wynik;
        wynik = pow (a,c);
        rejestr.push_back(wynik);
        return wynik;
    }

    int pierwiastki ()
    {
        int wynik;
        wynik = pow(a,(1/c));
        rejestr.push_back(wynik);
        return wynik;
    }

    void lista ()
    {
        cout<<"1 - dodawanie"<<endl;
        cout<<"2 - odejmowanie"<<endl;
        cout<<"3 - mnozenie"<<endl;
        cout<<"4 - dzielenie"<<endl;
        cout<<"5 - potegowanie"<<endl;
        cout<<"6 - pierwiastkowanie"<<endl;
        cout<<"q - wyjscie"<<endl;
        cout<<"7 - wyswietlenie wybranego z ostatnich dziesieciu wynikow"<<endl;
    }

    void podaj ()
    {
        cout<<"Podaj pierwsza liczbe: "<<endl;
        cin>>a;
        cout<<"Podaj druga liczbe: "<<endl;
        cin>>b;
    }

    void potega ()
    {
        cout<<"Podaj pierwsza liczbe: "<<endl;
        cin>>a;
        cout<<"Podaj potege/pierwiastek : "<<endl;
        cin>>c;
    }

    void wypisz ()
    {
        cout<<"Który wynik chcesz wyswietlic?"<<endl;
        cin>>d;
        cout<<rejestr[d-1];
    }
};

int main()
{
    Calculator kalkulator;


    for (;;)
    {
        kalkulator.lista ();

        char wybor;
            cout<<"Wybierz: "<<endl;
            cin>>wybor;

        if (wybor>'0' && wybor<'5')
                kalkulator.podaj ();

        if(wybor>'4' && wybor <'7')
                kalkulator.potega ();

        switch (wybor)
        {
        case '1':
            {
                cout<<kalkulator.dodaj()<<endl;
                break;
            }
        case '2':
            {
                cout<<kalkulator.odejmij()<<endl;
                break;
            }
        case '3':
            {
                cout<<kalkulator.pomnoz()<<endl;
                break;
            }
        case '4':
            {
                cout<<kalkulator.podziel()<<endl;
                break;
            }
        case '5':
            {
               cout<<kalkulator.potegi()<<endl;
               break;
            }
        case '6':
            {
                cout<<kalkulator.pierwiastki()<<endl;
                break;
            }
        case 'q':
            {
                exit (0);
            }
        case '7':
            {
                kalkulator.wypisz();
                break;
            }
        }
    }

    return 0;
}
