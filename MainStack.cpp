#include<iostream>
using namespace std;
#define n 100

class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int c){
        if(top==n-1){
            cout<<"Stack overflow.";
            return;
        }
        top++;
        arr[top]=c;
    }

    void pop(){
        if(top==-1){
            cout<<"No elemant to pop."<<endl;
            return;
        }
        top--;
    }
     
     int Top(){
         if(top==-1){
             cout<<"No elemant in stack."<<endl;
             return -1;
         }
         return arr[top];
     }
     bool empty(){
         return top==-1;
     }
};

int main(){
    stack st;
    st.push(8);
    st.push(0);
    st.push(1);
    st.push(6);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty();



}
