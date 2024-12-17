#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define SIZE 10000
char stack[SIZE];
char dummy[SIZE];
int top=-1;

int isFull() {
    if(top==SIZE-1)
        return 1;
    else
        return 0;
}

int isEmpty() {
    if(top==-1)
        return 1;
    else
        return 0;
}

void push(char chr) {
    if(isFull()==0) {
        top++;
        stack[top] = chr;
    }
    else
        printf("Error Stackoverflow");
}

void pop() {
    if(isEmpty()==0)
        top--;
    else
        printf("Stack underflow");
}

char peek() {
    if(isEmpty()==1) {
        return '\0';
        //printf("Stack is empty");
    }
    else {
        return stack[top];
    }   
}

/*void dispStack() {
    int itr;
    for(itr=0; itr<=top; itr++) {
        printf("%c", stack[itr]);
    }
    printf("\n");
}*/

bool isValid(char * s){
    int itr;

    for(itr=0; s[itr]!='\0'; itr++) {
        if(s[itr]=='{' || s[itr] == '(' || s[itr]=='[') {
            push(s[itr]);
        }
        else if(s[itr]=='}') {
            if(!isEmpty() && peek()=='{')
                pop();
            else {
                top=-1;
                return false;
            }
        }
        else if(!isEmpty() && s[itr]==')') {
            if(peek()=='(')
                pop();
            else {
                top=-1;
                return false;
            }
        }
        else if(!isEmpty() && s[itr]==']') {
            if(peek()=='[')
                pop();
            else {
                top=-1;
                return false;
            }
        }
            else {
                top=-1;
                return false;
            }
    }
    if(isEmpty()) {
        top = -1;
        return true;
    }
    else {
        top = -1;
        return false;
    }    
}