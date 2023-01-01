#include "stdio.h"
#include "stdlib.h"

#define MAXOFSTACK 10
int forCount =0;

struct stack{
    int data[MAXOFSTACK];
    int top;
};
typedef struct stack st;

int create_EmptyStack(st* myStack){
    myStack->top=-1;
}
int isStackFull(st* myStack){
    if(myStack->top==MAXOFSTACK-1){
        return 1;
    } else{
        return 0;
    }
}
int isStackEmpty(st* myStack){
    if(myStack->top==-1){
        return 1;
    } else{
        return 0;
    }
}
void pushToStack(st* myStack,int value){
    if (isStackFull(myStack )){
        printf("Stuck is Full");
    } else{
        myStack->top++;
        myStack->data[myStack->top]=value;
    }
    forCount++;
}
//void popFromStack(st* myStack){
//    if(isStackEmpty(myStack)){
//        printf("Stuck is Empty");
//    } else{
//        printf("Data from stack : %d\n",myStack->data[myStack->top]);
//        myStack->top--;
//    }
//    forCount--;
//}
void printDataFromStack(st* myStack){
    if(isStackEmpty(myStack)){
        printf("Stack is Empty");
    } else{
        printf("**%d Data found from stack**\n",myStack->top+1);
        int number=0;
        for ( int i = myStack->top; i >=0; i--) {
            number++;
            printf("Data %d from stack is : %d\n",number,myStack->data[i]);

        }

    }
    forCount--;
}

int main(){
    st* myStack=(st*)malloc(sizeof (st));
    create_EmptyStack(myStack);

    pushToStack(myStack,10);
    pushToStack(myStack,11);
    pushToStack(myStack,12);
    pushToStack(myStack,13);
    pushToStack(myStack,14);

//    popFromStack(myStack);
//    popFromStack(myStack);
//    popFromStack(myStack);
//    popFromStack(myStack);
//    popFromStack(myStack);
    printDataFromStack(myStack);

    return 0;
}

