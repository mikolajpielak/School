#include <iostream>
using namespace std;
int main()
{
    long double a, b, w=0;
    cin>>a;
    if(cin.fail())
    {
        cout<<"Error: not a number";
    }
    else
    {
    w+=a;
    cin.clear();
    cin.ignore(80, '\n');
    cin>>b;
    if(cin.fail())
    {
        cout<<"Error: not a number";
    }
    else
    {
    w+=b;
    cout<<fixed<<w;
    }
    }
}
