#include<iostream>

using namespace std;

template<class T , class T1>
class Base{
public:
    T a;
    T1 b;
    Base(T a, T1 b);
};

template<class T,class T1>
Base<T,T1>::Base(T a,T1 b)
{
    this->a=a;
    this->b=b;
    cout<<"Base Constructor"<<endl;
}

template <class T,class T1,class T2>
class Derived:public Base<int ,float>
{
public:
    T c;
    Derived(T1 a,T2 b,T c):Base(2,2.5){
        this->a=a;
        this->b=b;
        this->c=c;
        cout<<"Derived Constructor"<<endl;
    }
};
int main()
{
    Derived<int,int,float> der(1,1.5,3);
    cout<<der.a<<"\n"<<der.b<<"\n"<<der.c<<endl;
    return 0;
}
