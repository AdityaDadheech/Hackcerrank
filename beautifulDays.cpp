#include <bits/stdc++.h>
#include<string>
using namespace std;



int beautifulDays(int i, int j, int k) {
    long double number;
    int count = 0;
    int reverse,remainder1;
    for(int b = i;b<=j;b++){
        int n = b;
        reverse = 0, remainder1 = 0;
        while(n!=0){
            remainder1 = n%10;
            reverse = reverse*10 + remainder1;
            n = n/10;
        }
        
        if(abs((b-reverse)%k)==0){
            count++;
        }
    }
    return count;
}

int main()
{
    int i,j,k;
    
    cin>>i;
    cin>>j;
    cin>>k;
    
    cout<<beautifulDays(i,j,k);
}

