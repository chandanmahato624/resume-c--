#include<iostream>
using namespace std;
#define n 100

class stack{
	public:
    int *arr;
    int top;

    
    stack(){
        arr= new int[n];
        top=-1;
    }

void push(int c){
    if(top==n-1){
        cout<<"Stack is alredy full.";
    }
    top++;
    arr[top]=c;
}

void pop(){
    if(top==-1){
        cout<<"Stack is empty."<<endl;
    }
    top--;
}

void Top(){
    if(top== -1){
        cout<<"No data in stack ";
    }
    cout<<arr[top]<<endl;
}

void empty(){
    if(top==-1){
    	cout<<"Stack is empty.";
	}
	cout<<"Stack is not empty.";
}

};

int main(){

    stack st;
    st.push(8);
    st.push(6);
    st.push(4);
    st.Top();
    st.empty();
    st.pop();
    st.Top();
    st.pop();
    st.pop();
    st.pop();
    st.Top();
   st.empty();
   cout<<arr[top];
}
