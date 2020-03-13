#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int a=pow(10, 6);
    bool iff[a];
    int c=0;
    vector<int>tab;
    iff[0]=1;
    iff[1]=1;
    for(int i=2; i*i<=a; i++)
    {
        if(iff[i]==0)
        {
            for(int j=i*i; j<a; j+=i)
            {
                iff[j]=1;
            }
        }
    }
    for(int i=0; i<a; i++)
    {
        if(iff[i]==0)
            tab.push_back(i);
    }
    for(int i=0; i<tab.size()-1; i++)
    {
        if(tab[i]+2==tab[i+1])
        {
            c++;
        }
    }
    cout<<c;
}
