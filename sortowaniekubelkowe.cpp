#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int tab[1000000]={};
    fstream one, two;
    one.open("dane.txt", ios::in);
    two.open("out.txt", ios::out);
    int a;
    while(one>>a)
    {
        tab[a-1]++;
    }
    for(int j=999999; j>0; j--)
    {
        while(tab[j]>0)
        {
            two<<j<<" ";
            tab[j]--;
        }
    }
    one.close();
    two.close();
}
