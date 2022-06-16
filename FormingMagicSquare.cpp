#include<iostream>
using namespace std;

int magicSquare0(int arr[3][3]){
    int sum = abs(8-arr[0][0]) + abs(3-arr[0][1]) + abs(4-arr[0][2]) + abs(1-arr[1][0]) + abs(5-arr[1][1]) + abs(9-arr[1][2]) + abs(6-arr[2][0]) + abs(7-arr[2][1]) + abs(2-arr[2][2]);
    
    return sum;
}

int magicSquare1(int arr[3][3]){
    int sum = abs(6-arr[0][0]) + abs(1-arr[0][1]) + abs(8-arr[0][2]) + abs(7-arr[1][0]) + abs(5-arr[1][1]) + abs(3-arr[1][2]) + abs(2-arr[2][0]) + abs(9-arr[2][1]) + abs(4-arr[2][2]);
    
    return sum;
}

int magicSquare2(int arr[3][3]){
    int sum = abs(2-arr[0][0]) + abs(7-arr[0][1]) + abs(6-arr[0][2]) + abs(9-arr[1][0]) + abs(5-arr[1][1]) + abs(1-arr[1][2]) + abs(4-arr[2][0]) + abs(3-arr[2][1]) + abs(8-arr[2][2]);
    
    return sum;
}

int magicSquare3(int arr[3][3]){
    int sum = abs(4-arr[0][0]) + abs(9-arr[0][1]) + abs(2-arr[0][2]) + abs(3-arr[1][0]) + abs(5-arr[1][1]) + abs(7-arr[1][2]) + abs(8-arr[2][0]) + abs(1-arr[2][1]) + abs(6-arr[2][2]);
    
    return sum;
}

int magicSquare4(int arr[3][3]){
    int sum = abs(8-arr[0][0]) + abs(1-arr[0][1]) + abs(6-arr[0][2]) + abs(3-arr[1][0]) + abs(5-arr[1][1]) + abs(7-arr[1][2]) + abs(4-arr[2][0]) + abs(9-arr[2][1]) + abs(2-arr[2][2]);
    
    return sum;
}

int magicSquare5(int arr[3][3]){
    int sum = abs(6-arr[0][0]) + abs(7-arr[0][1]) + abs(2-arr[0][2]) + abs(1-arr[1][0]) + abs(5-arr[1][1]) + abs(9-arr[1][2]) + abs(8-arr[2][0]) + abs(3-arr[2][1]) + abs(4-arr[2][2]);
    
    return sum;
}

int magicSquare6(int arr[3][3]){
    int sum = abs(2-arr[0][0]) + abs(9-arr[0][1]) + abs(4-arr[0][2]) + abs(7-arr[1][0]) + abs(5-arr[1][1]) + abs(3-arr[1][2]) + abs(6-arr[2][0]) + abs(1-arr[2][1]) + abs(8-arr[2][2]);
    
    return sum;
}

int magicSquare7(int arr[3][3]){
    int sum = abs(4-arr[0][0]) + abs(3-arr[0][1]) + abs(8-arr[0][2]) + abs(9-arr[1][0]) + abs(5-arr[1][1]) + abs(1-arr[1][2]) + abs(2-arr[2][0]) + abs(7-arr[2][1]) + abs(6-arr[2][2]);
    
    return sum;
}

int main(){
    int arr[3][3],i,j,min[8];
    
    for(i = 0;i<3;i++){
        for(j = 0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    min[0] = magicSquare0(arr);
    min[1] = magicSquare1(arr);
    min[2] = magicSquare2(arr);
    min[3] = magicSquare3(arr);
    min[4] = magicSquare4(arr);
    min[5] = magicSquare5(arr);
    min[6] = magicSquare6(arr);
    min[7] = magicSquare7(arr);
    
    int minimum = min[0];
    for(i = 0;i<8;i++){
        if(min[i]<minimum){
            minimum = min[i];
        }
    }
    cout<<minimum;
    
    return 0;
}

