#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;


int main() {
    long q,t,n;
    cin >> q;
    stack<long> s;
    stack<long> max;
    max.push(0);
    for(int q0 = 0; q0 < q; q0++)
    {
        cin >> t;
        if(t == 1){
            cin >> n;
            if(n >= max.top()){
                max.push(n);
            }
            s.push(n);
        } else if(t == 2){
            if(s.top() == max.top()){
                max.pop();
            }
            s.pop();
        } else {
            cout << max.top() << endl;
        }
    }
    
    return 0;
}