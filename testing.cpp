#include<iostream>

using namespace std;
class box{
public:
    box(){cout<<"Constructing"<<endl;}
    ~box(){cout<<"Destructing"<<endl;}
    void getit(){cout<<"MEMBER FUNCTION"<<endl;}
    box(box& ob)
    {
        cout<<"Constructing"<<endl;
    }
};

void func(box b)
{
    b.getit();
}

int main()
{
    box c;
    func(c);
}
