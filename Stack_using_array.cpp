#include<iostream>
#include<stack>
using namespace std;

class ArrayStack{
    private:
        int *arr;
        int size;
        int top;
    public:
        ArrayStack(int val){
            size = val;
            arr = new int[size];
            top = -1;   
        }    
        ~ArrayStack(){
            delete[] arr;
        }
        int isEmpty(){
            if(top == -1){
                return 1;
            }
            else{
                return 0;
            }
        }
        void push(int value){
            if(top >= size-1){
                cout<<"Stack Overflow"<<endl;
            }
            else{
                top++;
                arr[top] = value;
            }
        }
        void pop(){
            if(top < 0){
                cout<<"Stack Underflow"<<endl;
            }
            else{
                --top;
            }
        }
        int Top(){
            if(top >= 0){
                return arr[top];
            }
            else{
                return -1;
            }
        }
        void display(){
            if(top == -1){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<"Stack elements are: "<<endl;
                for(int i = top; i >= 0; --i){
                    cout<< arr[i]<<" ";
                }
                cout<<endl;
            }
        }
};
int main(){
    int StackSize;
    cout<<"Enter the size of the Stack: "<<endl;
    cin>>StackSize;
    ArrayStack as(StackSize);
    cout<<"Is stack empty?"<<(as.isEmpty()?" Yes":" No")<<endl;
    int ch,input;
    cout<<"1) Insert"<<endl<<"2) Delete"<<endl<<"3) Display"<<endl<<"4) Top"<<endl<<"5) Check stack empty"<<endl<<"6) Exit"<<endl;
    do{
        cout<<"Enter your choice: "<<endl;
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Enter element: "<<endl;
                cin>>input;
                as.push(input);
                break;
            case 2:
                as.pop();
                break;
            case 3:
                as.display();
                break;
            case 4:
                cout<<as.Top()<<endl;  
                break;
            case 5:
                cout<<"Is stack empty?"<<(as.isEmpty()?" Yes":" No")<<endl; 
                break; 
            case 6:
                cout<<"Exit"<<endl;
                break;    
            default:
                cout<<"Invalid Choice!"<<endl;              
        }
    } while(ch != 6);
    return 0;
}