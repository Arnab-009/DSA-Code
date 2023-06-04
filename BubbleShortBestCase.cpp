#include<iostream>
using namespace std;
void printArray(int A[],int n){
    for(int i = 0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void Bubble(int A[],int n){
    int temp,isSorted;
    for(int i = 0;i<n;i++){
        isSorted = 0;
        for(int j = i+1;j<n;j++){
            if(A[j]<A[i]){
                isSorted = 1;
                temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }
        if(isSorted == 0){
            //cout<<"Round: "<<i<<endl;
            return;
        }
    }
}
int main(){
    int A[] = {45,87,2,68,1,23};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"Unshorted Array: ";
    printArray(A,n);
    Bubble(A,n);
    cout<<"Shorted Array: ";
    printArray(A,n);
    return 0;
}