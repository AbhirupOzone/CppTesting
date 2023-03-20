#include<bits/stdc++.h>
using namespace std;

class Bank{
    public:
    int accno;
    string name;
    Bank(int accno, string name)
    {
        this->accno = accno;
        this->name = name;
    }
    void details()
    {
        cout<<accno<<" and "<<name<<endl;
    }
};