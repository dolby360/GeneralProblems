
#include <iostream>
using namespace std;


// arr,size,used,index,k,inProgressTotalSum, bucketSize
bool rec(int arr[],int size,bool used[],
int index,int k,int inProgressTotalSum,int bucketSize){
    if(k == 1){
        return true;
    }
    if(inProgressTotalSum == bucketSize){
        return rec(arr,size,used,0,k - 1,0, bucketSize);
    }
    for( int i = 0; i < size; i++){
        if( !used[i] && inProgressTotalSum + arr[i] <= bucketSize ){
            used[i] = true;
            if( rec(arr,size,used,index + 1,k,inProgressTotalSum + arr[i], bucketSize) ){
                used[i] = false;
                return true;
            }
        }
    }
    return false;
}


bool partitionToKEqualSum(){
    int arr[6] = {6,9,5,3,7,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool* used = new bool[size];
    int totalSum = 0;
    for(int i = 0; i < size; i++){
        used[i] = false;
        totalSum += arr[i];
    }
    int k = 4;
    
    if(totalSum % k != 0){
        cout << "Not divided" << endl;
    }else{
        cout << "total sum: " << totalSum << endl;
        cout << "bucketSize: " << totalSum / k << endl;
    }
    int bucketSize = totalSum / k;
    return rec(arr,size,used,0,k,0,bucketSize);
}

