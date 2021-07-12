#include<bits/stdc++.h>

using namespace std;
template<class T>
void swap(T* a, T* b)
{
    T t = *a;
    *a = *b;
    *b = t;
}
template<class T>
T part(T* A,T st,T ed);

template<class T>
void quicksort(T* A,T st,T ed)
{
    if(st<ed)
    {
        T p=part(A,st,ed);
        quicksort(A,st,p-1);
        quicksort(A,p+1,ed);
    }
}

template<class T>
T part(T* A,T st,T ed)
{
    T pivot=A[ed];
    T p=st;
    for(T i=st;i<ed;i++)
    {
        if(A[i]<=pivot)
        {
            swap(&A[i],&A[p]);
            p++;
        }
    }
    swap(A[p],A[ed]);
    return p;
}

int main()
{
    int A[7]={10,80,30,90,40,50,70};
    quicksort(A,0,7-1);
    for(int i=0;i<7;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}
