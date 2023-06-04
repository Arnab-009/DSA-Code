#include<iostream>
using namespace std;
void printArray(int A[],int n){
    for(int i = 0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void Bubble(int A[],int n){
    int temp;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(A[j]<A[i]){
                temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }
    }
}
int main(){
    int A[] = {3,12,45,6,99,1};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"Unshorted Array: ";
    printArray(A,n);
    Bubble(A,n);
    cout<<"Shorted Array: ";
    printArray(A,n);
    return 0;
}