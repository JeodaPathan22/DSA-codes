#include<iostream>
using namespace std;

#define MAX 100
int myStack[MAX];
int top = -1;

int isEmpty() {
	if(top == -1)
    return 1;
	else return 0;

}

int isFull() {
    return top == MAX - 1;
}

void push(int value) {
    if (isFull()) {
        cout<<"Stack overflow\n";
        return;
    }
    myStack[++top] = value;
}

void pop() {
    if (isEmpty()) {
        cout<<"Stack underflow\n";
        return;
    }
    top--;
}

int peek() {
    if (isEmpty()) {
        cout<<"Stack is empty\n";
        return -1;
    }
    return myStack[top];
}

void display() {
    if (isEmpty()) {
        cout<<"Stack is empty\n";
        return;
    }
    for (int i = top; i >= 0; i--) {
        printf("%d\n", myStack[i]);
    }
}

int main() {
    push(5);
    push(6);
    push(10);
    pop();
    display();

    return 0;
}
