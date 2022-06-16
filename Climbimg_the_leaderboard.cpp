#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;//size of ranked 
    cout<<"Enter the value of n:";
    cin>>n;
    int m;//size of players array
    cout<<"Enter the value of m:";
    cin>>m;
    
    
    int ranked[n];
    int player[m];
    
    for(int i = 0;i<n;i++){
        cin>>ranked[i];
    }
    
    
    for(int i = 0;i<m;i++){
        cin>>player[i];
    }
    
    int rank;
    int rankings[m];
    for(int i = 0;i<m;i++){
        rank = 1;
        for(int j = 0;j<n;j++){
            if(player[i]>=ranked[j]){
                break;
            }
            if(j==0){
                if(player[i]<ranked[j]){
                    rank++;
                }
            }
            else if( j>0 && ranked[j]==ranked[j-1]){
                continue;
            }
            else{
                if(player[i]<ranked[j]){
                    rank++;
                }
            }
        }
        rankings[i] = rank;
    }
    
    for(int i = 0;i<m;i++){
        cout<<rankings[i]<<endl;
    }
    return 0;
    
}
