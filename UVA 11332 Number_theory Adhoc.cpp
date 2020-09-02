/*****************************************
* In the name of Almighty Allah*
* AUTHOR:Md Habib Hasan Shakil Buya*
* ID: 201932130119 *
* INSTITUTION: Zhejiang Normal University *
******************************************/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, n)      for (ll i=0; i<n; i++)
#define PB push_back
#define F first
#define S second
#define MP make_pair

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

int solve(ll n)
{
    ll sum = 0;
    while(n!=0){
        sum+= n%10;
        n /=10;
    }
    return sum;
}

int main()
{
    ll num;
    while(cin>>num && num !=0)
    {
        ll x=solve(num);
        
        while(x/10 !=0){
            x = solve(x);
        }
        cout<<x<<endl;
    }
}