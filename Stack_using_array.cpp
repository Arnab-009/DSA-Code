#include<iostream>
using namespace std;
class Stack{
    private:
        int *sp;
        int size;
        int top;
    public:
        Stack(int size){
            this->size = size;
            sp = new int[size];
            top = -1;
        }    
        ~Stack(){
            delete[] sp;
        }
        int isEmpty(){
            if(top == -1){
                return 1;
            } else {
                return 0;
            }
        }
        int isFull(){
            if(top == size-1){
                return 1;
            } else {
                return 0;
            }
        }
        void push(int data){
            if(top >= size-1){
                cout<<"Stack Overflow"<<endl;
            } else {
                top++;
                sp[top] = data;
            }
        }
        int pop(){
            if(top == -1){
                cout<<"Stack Underflow"<<endl;
            } else {
                return sp[top--];
            }
        }
        int Top(){
            if(top >= 0){
                return sp[top];
            } else {
                return -1;
            }
        }
        void peak(Stack *sp, int i){
            int arrayInd = sp->top-i+1;
            if(arrayInd < 0){
                cout<<"Not a valid position for the stack"<<endl;
            } else {
                cout<<sp->sp[arrayInd]<<endl;
            }
        }
        void display(){
            if(top == -1){
                cout<<"Stack is Empty!!"<<endl;
            } else {
                cout<<"Stack Elemnts are: "<<endl;
                for(int i = top; i>=0; i--){
                    cout<<sp[i]<<" ";
                }
                cout<<endl;
            }
        }
};
int main(){
    int size;
    cout<<"Enter the size of the stack:"<<endl;
    cin>>size;
    Stack s(size);
    int ch;
    cout<<"1) Insert(push)"<<endl<<"2) Delete(pop)"<<endl<<"3) Find top"<<endl<<"4) Check Empty"<<endl<<"5) Check Full"<<endl<<"6) Display Stack"<<endl<<"7) Peak"<<"8) Exit"<<endl;
    
    do{
        cout<<"Enter your choice:"<<endl;
        cin>>ch;
        switch(ch){
            case 1:
                int val;
                cout<<"Enter the value to be inserted:"<<endl;
                cin>>val;
                s.push(val);
                break;
            case 2:
                s.pop();
                break; 
            case 3:
                cout<<s.Top()<<endl;
                break;
            case 4:
                cout<<"Is Stack Empty?"<<(s.isEmpty()?"Empty":"Not Empty")<<endl;
                break;
            case 5:
                cout<<"Is Stack Full?"<<(s.isFull()?"Full":"Not Full")<<endl;
                break;
            case 6:
                s.display();
                break;
            case 7:
                int i;
                cout<<"Enter a position"<<endl;
                cin>>i;
                s.peak(&s, i);
                break;    
            case 8:
                cout<<"Exit"<<endl;  
                break;                    
            default :
                cout<<"Wrong choice!!"<<endl;    
        }
    } while(ch != 8);

    return 0;
}
