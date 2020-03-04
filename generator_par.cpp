#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    fstream plik;
    vector<int> tab;
    plik.open("dane.txt", ios::out);
    srand( time( NULL ) );
    int s, a, b, c, f;
    cout<<"(ilosc) (dol przedzialu) (gora przedzialu)"<<endl;
    cin>>a>>b>>c;
    while(tab.size()!=a)
    {
        f=0;
        s=rand()%(c-b)+b;
        for(int i=0; i<tab.size(); i++)
        {
            if(tab[i]==s)
                f=1;
        }
        if(f==0)
        {
            tab.push_back(s);
            plik<<s<<endl;
            cout<<s<<endl;
        }
    }
    plik.close();
    plik.open("wyjscie.txt", ios::out);
    while(!tab.empty())
    {
        plik<<tab.back()<<" - ";
        cout<<tab.back()<<" - ";
        tab.pop_back();
        plik<<tab.back()<<endl;
        cout<<tab.back()<<endl;
        tab.pop_back();
    }
    plik.close();
}
