#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() 
{
    vector<long long> S;
    long long n,x;
    int t;
    cin>>n;
    while(n--)
    {
        cin>>t;
        if(t==1)
        {
            cin>>x;
            S.push_back(x);
        }
        else if (t==2)
        {
            S.pop_back();
        }
        else
            cout<<*(std::max_element(S.begin(),S.end()))<<endl; //Get value using iterator 
    }
    return 0;
}
