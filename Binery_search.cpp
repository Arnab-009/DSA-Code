#include<iostream>
using namespace std;
int binerySearch(int arr[],int size,int element){
    int low,mid,high;
    low = 0;
    high = size-1;
    while(low<=high){
    mid = (low + high)/2;
    if(arr[mid]==element){
        return mid;
    }
    else if(arr[mid]<element){
        low = mid + 1;
    }
    else{
        high = mid - 1;
    }
    }
    return -1;

}
int main(){
     int arr[] = {2,4,7,13,45,56,77,134,150,232,250};
    int size = sizeof(arr)/sizeof(arr[0]);
    int element = 56;
    int searchIndex = binerySearch(arr,size,element);
    cout<<"The seach element "<<element<<" found in index "<<searchIndex<<endl;
    return 0;
}