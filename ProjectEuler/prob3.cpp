/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/

#include<iostream>
using namespace std;

int f[20];
void primefacmax(int a[],int n)
{   int max=a[0];
    for(int i=1;i<=n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    cout<<"max:"<<max<<endl;
}
void primefac(long n)
{int count=0;
    while(n%2==0)
    {   
        f[count]=2;
        count++; 
        n=n/2;
    }

    for(int j=3;j<=sqrt(n);j=j+2)
    {
        while(n%j==0)
        {
            f[count]=j;
            count++;
            n=n/j;
        }
    }

    if(n>2)
    {
        f[count]=n;
       
    }
    primefacmax(f,count);
}
int main()
{ 
    long b=600851475143;

    primefac(b);
    
    
}