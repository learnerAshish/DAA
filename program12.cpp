#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--)
  {
    int k;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    //priority_queue<int , vector<int> , greater<int> >q; //min heap 
    priority_queue<int>q;//max heap
    for(int i=0;i<n;i++)
    {
      q.push(a[i]);
      if(q.size()>k)
      {
        q.pop();
      }
    }
    cout<<q.top();
  }
}