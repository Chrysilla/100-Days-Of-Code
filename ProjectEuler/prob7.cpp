/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we 
can see that the 6th prime is 13.

What is the 10 001st prime number?*/


#include<iostream>
using namespace std;

int main()
{   int i=1;int j=1,flag=0;
    do
    {   flag=0;j=j+2;
        for(int p=1;p<=j;p++)
        {
           if(j%p==0) 
           flag++;
        }
        if(flag==2)
        i++;

        

    }while(i<10001);
    cout<<"10001st prime: "<<(j);
}