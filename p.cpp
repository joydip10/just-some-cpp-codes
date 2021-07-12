#include<iostream>

using namespace std;

int main()
{
    char* s="hello";
    cout<<*(s+2)<<endl;

    char* p=s;
    cout<<sizeof(*p)<<endl;
}
