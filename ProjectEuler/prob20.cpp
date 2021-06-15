/*n! means n × (n − 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!*/
#include<iostream>
#include<math.h>
using namespace std;
unsigned long long fac(int n)
{   unsigned long long f=1;
    for(int i=2;i<=n;i++)
    {
        f=f*i;
    }
    return(f);
}
void sum(unsigned long long n)
{
    unsigned long long sum=0,rem;

    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout<<"sum of digits: "<<(sum);
}

int main()
{
    int n=40;
    unsigned long long p=fac(n);
    sum(p);

}