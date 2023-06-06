#include<iostream>
using namespace std;
void printArray(int *A,int n){
    for(int i = 0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void selection(int *A,int n){
    int min;
    for(int i=0; i<n-1; i++){
        min = i;
        for(int j=i+1; j<n; j++){
            if(A[j]<A[min]){
                min = j;
            }
        }
        int temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
}
int main(){
    int A[] = {3,12,45,6,99,1};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"Unshorted Array: ";
    printArray(A,n);
    selection(A,n);
    cout<<"Shorted Array: ";
    printArray(A,n);
    return 0;
}