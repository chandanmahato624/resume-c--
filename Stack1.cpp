#include<iostream>
using namespace std;
#define n 100
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int c){
        if(top==n-1){
            cout<<"Stack is full";
        }
    top++;
    arr[top]=c;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        top--;
    }

    void Top(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        cout<<arr[top]<<endl;
    }

    bool empty(){
        return top== -1;
    }
};
int main(){
stack st;
st.push(5);
st.push(8);
st.push(2);
st.Top();
st.pop();
st.Top();
st.pop();
st.pop();
st.pop();
cout<<st.empty();
}
