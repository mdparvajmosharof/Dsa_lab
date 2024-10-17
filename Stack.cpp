#include<iostream>
using namespace std;

int MAX = 8;
int stack[8];
int top;

int peek(){
    return stack[top];
}

int isFull(){
    if(top == MAX){
        return 1;
    }
    else return 0;
}

int isEmpty(){
    if(top == 0){
        return 1;
    }
    else return 0;
}

void push(int data){
    if(!isFull()){
        top= top+ 1;
        stack[top] = data;
    }
    else {
        cout << "Your Stack is full." ;
        
    }
}

int pop(){
    int data;
    if(!isEmpty()){
        data = stack[top] ;
        top = top - 1;
        return data;
    }
    else{
        cout<< "Couldn't retrieve data cause stack is empty!!!" ;
        return 0;
    }
}


int main() {
    push(23);
    push(2);
    push(243);
    push(24);
    push(28);

    pop();

    push(56);
    for(int i = 1; i <= top ; i++){
        cout<< "stack[" << i << "]:"<< stack [i] << endl ;
    }

    cout << "The top Element : " << peek() << endl;
    cout << (isFull() ? "Stack Full " : "Stack is not full.") << endl;
    cout <<( isEmpty() ? "Empty" : "Not empty.") << endl;
}