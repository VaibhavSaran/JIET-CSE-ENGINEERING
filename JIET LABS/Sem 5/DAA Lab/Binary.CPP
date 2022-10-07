//Program to implement Binary search
#include<iostream>
using namespace std;
int main()
{
    int a[100],x,n,flag=0,start,last,mid;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for (int i = 0; i<n;i++)
        cin>>a[i];
    start=0;
    last = n;
    cout<<"\nEnter the element to be searched: ";
    cin>>x;
    for (int i=0;i<n;i++)
    {
        mid = (start +last)/2;
        if (a[mid]==x)
        {
            flag=1;
            cout<<"The element is at position: "<<mid+1;
            break;
        }
        else if(x>a[mid])
            start=mid+1;
        else
            last=mid-1;
    }
    if (flag==0)
        cout<<"Element not found!!";
    return 0;
}
