#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Enter the value of n:";
	
	cin>>n;
	
	int i,j,k;
	
	k = n;
	
	for(i = 0;i<(n-1);i++){
		for(j = 0;j<(2*n-1);j++){
			if(i==0){
				cout<<n;
			}
			
			else{
				if(j==0 || j==(2*n-2)){
					cout<<n;
				}
				else{
					cout<<(n-i);
				}
				
			}
		}
		cout<<endl;
	}
	
	for(i = 0;i<(2*n-1);i++){
		if(i<(n-1)){
			cout<<k--;
		}
		
		else{
			cout<<k++;
		}
	}
	
	
	
	return 0;
}
