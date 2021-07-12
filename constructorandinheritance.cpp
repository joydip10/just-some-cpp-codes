#include<bits/stdc++.h>

using namespace std;


template<class T1,class T2>
class car{
public:
    T1 type;
    T2 reg_no;
    car(T1 type,T2 reg_no);
};

template<class T1,class T2>
car<T1,T2>::car(T1 type,T2 reg_no)
{
    this->type=type;
    this->reg_no=reg_no;
}

template<class T1,class T2>
class audi:public car<string,int>{
public:
    T1 model;
    T2 price;
    audi(T1 type,T2 reg_no,T1 model,T2 price):car("four sitters",1051)
    {
    this->type=type;
    this->reg_no;
    this->model=model;
    this->price=price;
    }

};

int main()
{
    audi<string,int> AX("five number",1051,"audi123",1200000);
    cout<<AX.type<<endl;
    cout<<AX.reg_no<<endl;
    cout<<AX.model<<endl;
    cout<<AX.price<<endl;
    return 0;
}
