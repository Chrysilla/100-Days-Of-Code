/*6) Write a program to sort an array of student structures according to the roll number.*/

#include<iostream>
using namespace std;

struct student{
    int rollNo;
    char name[20];

};
void selection_sort(student a[],int n)
{
    int i=0,j=0;
    for(i=0;i<n-1;i++)
    {
        int min_index=i;
        for(j=i+1;j<n;j++)
        {
        
            if((a[j].rollNo) < (a[min_index].rollNo))
            {
                min_index=j;
                
            }
            
        }
        student temp=a[i];
        a[i]=a[min_index];
        a[min_index]=temp;
    }

}
int main()
{
    student s[10];

    for(int i=0;i<5;i++)
    {
        cout<<"Enter the roll no: ";
        cin>>s[i].rollNo;
        cout<<"Enter name of student:";
        cin>>s[i].name;
    }
    selection_sort(s,5);
    cout<<"Sorted structure array: ";
    for(int i=0;i<5;i++)
    {
        cout<<s[i].rollNo<<" : "<<s[i].name;
        cout<<"\n"; 
    }
    

}