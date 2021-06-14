#include<iostream>
#include<string.h>

using namespace std;

template<class T>

T & larger(T & a, T &b )
{

    return(a>b?a:b);
}


int main()
{
    float p=4.7,q=9.8;

    cout<<"Larger of "<< p<<" & "<<q<<" is "<<larger(p,q);

    string s1= "Cat";
    string s2="Dog";
    cout<<"Larger of "<< s1<<" & "<<s2<<" is "<<larger(s1,s2);


}