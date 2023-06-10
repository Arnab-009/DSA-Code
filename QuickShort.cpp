#include<iostream>
using namespace std;
void printArray(int *A,int n){
    for(int i = 0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int partition(int A[], int low, int high){
    int pivot = A[low];
    int i = low + 1;
    int j = high;

    do{
    while(A[i]<=pivot){
        i++;
    }
    while(A[j]>pivot){
        j--;
    }
    if(i<j){
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    } while(i<j);
    //swap A[low] & A[j]
        int temp = A[low];
        A[low] = A[j];
        A[j] = temp;
    return j;
}

void quickShort(int A[],int low,int high){
    int partitionIndex;
    //index of pivot after partition
    if(low<high){
    partitionIndex = partition(A,low,high);
    quickShort(A,low,partitionIndex-1);// sort left subarray
    quickShort(A,partitionIndex+1,high);// sort right subarray
    }
}
int main(){
    int A[] = {3,12,45,6,99,1};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"Unshorted Array: ";
    printArray(A,n);
    quickShort(A,0,n-1);
    cout<<"Shorted Array: ";
    printArray(A,n);
    return 0;
}