#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cout<<endl<<"Enter the no of items ordered";
    cin>>n;
    cout <<endl<< "Enter the index no of the item anna didnt share";
    cin>>k;
    int arr[n];
    cout<<endl<<"Enter the amount of all the items ordered";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int m;
    cout<<endl<<"How much did anna pay?";
    cin>>m;
    int sum;
    for(int i=0;i<n;i++)
    {
        if(i==k)
        {
            continue;

        }
        else{
            sum=sum+ arr[i];
        }

    }
    if(m==(sum/2))
    {
    cout<<endl<<"Bon appetit";
    }
    else if(m<(sum/2))
    {
        cout<<endl<<"Anna have to pay "<< ((sum/2)-m)<< " more";
    }
    else
    {
        cout<<endl<<"Anna will get "<<(m-(sum/2)) ;
    }
    return 0;
}