#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,rev=0;
     while(n>0)
     {
         a= n%10;
         rev= rev*10+a;
         n=n/10;
     }
     cout<<rev;
     return 0;
}