#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=0, m=0, p=0, count=0;
    cin >> n >> m >> p;

    if(m<n){
        count = (n-m)/p+1;
    }
    else{
        count = 0;
    }

    cout << count;
    return 0;
}