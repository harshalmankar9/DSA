#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

typedef struct {
    int item[SIZE];
    int top;
}Stack;

void push(Stack *, int);
int pop(Stack *);
void init(Stack *);

void init(Stack *sp){
    sp->top = -1;
}

void push(Stack *sp, int value){
    if(sp->top == SIZE - 1){
        printf("Stack Overflow");
        return;
    }
    sp->top++;
    sp->item[sp-top] = value;
}

int pop(Stack *sp){
    if(sp->top == -1){
        printf("Stack Underflow");
        return -69;
    }
    int value;
    value = sp->item[sp-top];
    sp->top--;
    return value;
}

int main(){

}