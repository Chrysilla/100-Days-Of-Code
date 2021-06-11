/*The sum of the squares of the first ten natural numbers is,

1
2
+
2
2
+
.
.
.
+
10
2
=
385
The square of the sum of the first ten natural numbers is,

(
1
+
2
+
.
.
.
+
10
)
2
=
55
2
=
3025
Hence the difference between the sum of the squares of
 the first ten natural numbers and the square of the sum is 
3025
−
385
=
2640
.

Find the difference between the sum of the squares of the first 
one hundred natural numbers and the square of the sum.*/
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int sum1=0,sum2=0;

    for(int i=1;i<=100;i++)
    {
        sum1=sum1+pow(i,2);
    }
    
    
        sum2=100*101/2;
        long sum3=pow(sum2,2);
       long diff=sum3-sum1;
    cout<<"Difference : "<<diff<<endl;
}