#include <bits/stdc++.h>

using namespace std;


int saveThePrisoner(int n, int m, int s) {
    
    int r;
    r = m%n;
    
    if((r+s-1)%n==0){
        return n;
    }
    else{
        return ((r+s-1)%n);
    }
}

int main()
{
    int q,n,m,s;
    
    cin>>q;
    
    for(int i = 0;i<q;i++){
        cin>>n;
        cin>>m;
        cin>>s;
        cout<<saveThePrisoner(n,m,s)<<endl;
        
    }
}

