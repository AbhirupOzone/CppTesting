#include<bits/stdc++.h>
using namespace std;
class School{
    public:
    int rollno;
    string name;
    School(int rollno, string name)
    {
        this->rollno = rollno;
        this->name = name;
    }
    void details()
    {
        cout<<rollno<<" and "<<name<<endl;
    }
};