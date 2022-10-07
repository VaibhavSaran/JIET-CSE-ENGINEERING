// Program to implement Linear Search
#include<iostream>
using namespace std;
int main()
{
    int a[100],x,n,flag=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for (int i = 0; i<n;i++)
        cin>>a[i];
    cout<<"\nEnter the element to be searched: ";
    cin>>x;
    for (int i=0;i<n;i++)
    {
        if (a[i]==x)
        {
            flag=1;
            cout<<"The element is at position: "<<i+1;
            break;
        }
    }
    if (flag==0)
        cout<<"Element not found!!";
    return 0;
}
