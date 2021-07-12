#include<iostream>

using namespace std;

class box
{
public:
    int height,breadth;
    void set(int h,int b);
    int show();
    box operator +(box ob);
    friend void operator << (ostream &os,box ob)
    {
        os<<ob.height<<" "<<ob.breadth<<endl;
    }

};
void box::set(int h,int b)
{
    height=h;
    breadth=b;
}
int box::show()
{
    cout<<"Height: "<<height<<endl;
    cout<<"Breadth: "<<breadth<<endl;
}

box box::operator +(box op)
{
    box temp;
    temp.height=this->height+op.height;
    temp.breadth=this->breadth+op.breadth;
    return temp;
}

int main()
{
    box a,b,c;
    a.set(10,20);
    a.show();
    b.set(5,5);
    b.show();

    c=a+b;
    c.show();

    cout<<c;

}
