// Problem Link: https://atcoder.jp/contests/agc010/tasks/agc010_a

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
	ll N;
    cin >> N;
    
    int odd = 0, even = 0;
    vector<int> V(N);
    for(int i=0; i<N; i++) 
    {
        cin >> V[i];
        
        if(V[i] % 2) odd++;
        
        else even++;
    }
    if(odd % 2) cout << "NO";
    
    else cout << "YES";
    
    return 0;
}
