#include<bits/stdc++.h>
using namespace std;

void duplicate(char arr[],int n)
{
    char large='a';
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    int b[large-'0'];
    for(int i=0;i<n;i++)
    {
        b[arr[i]-'0']++;
    }
    int max=0,x;
    for(int i=0;i<large;i++)
    {
        if(b[i]>max)
        {
            x=i;
            max=b[i];
        }
    }
    cout<<'134'-'0'<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        duplicate(arr,n);
    }
}