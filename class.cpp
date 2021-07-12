#include<iostream>
using namespace std;

class rectangle{
public:
    int height;
    int breadth;
    int area();
    static int times;
    rectangle();
    void set();
};
int rectangle::times;
void rectangle::set(){
    times=0;
}
rectangle::rectangle(){
    times++;
}
int rectangle::area() const
{       int p=height*breadth;
        return p;
    }
int main()
{
    /*
    rectangle rect[10];
    rectangle *p;
    p=&rect[0];
    for(int i=0;i<10;i++)
    {
        int a,b;
        cin>>a>>b;
        (p+i)->height=a;
        (p+i)->breadth=b;
        cout<<(p+i)->area()<<endl<<endl;
    }*/
  /*
    rectangle rect[5];
    rectangle& r=rect[0];
    for(int i=0;i<10;i++)
    {
        int a,b;
        cin>>a>>b;
        r.height=a;
        r.breadth=b;
        cout<<r.area()<<endl<<endl;
    }
    */

    /*rectangle rect[10];
    cout<<rect[0].times<<endl;
    rect[4].set();
    cout<<rect[0].times<<endl;*/

    rectangle* p=new rectangle[5];
    (p+0)->height=2;
    (p+0)->breadth=3;
    cout<<(p+0)->area();
}
