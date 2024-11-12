#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct Stack{
    int items[MAX];
    int top;
};

void initStack(struct Stack *s){
    s->top= -1;
}
int isFull(struct Stack *s){
    return s->top==MAX-1;
}
int isEmpty(struct Stack *s) {
    return s->top == -1;
}

void push(struct Stack *s,int value)
{
 if(isFull(s)){
    printf("Stack isFull! cannot push %d\n",value);
 } else{
    s->top++;
    s->items[s->top]=value;
    printf("pushed %d onto the stack \n",value);
 }
}
int pop(struct Stack *s){
    if(isEmpty(s)){
        printf("Stack is empty! cannot pop \n ");
        return -1;
}else{
    int poppedValue=s->items[s->top];
    s->top--;
    printf("Popped %d from the stack\n",poppedValue);
    return poppedValue;
}
}
void displayStack(struct Stack *s){
    if(isEmpty(s)){
        printf("stack isEmpty\n");
    }else{
        printf("stack elements: ");
        for(int i=0; i<=  s->top; i++){
            printf("%d ",s->items[i]);
        }
        printf("\n");
    }
}
int main(){
    struct Stack stack;
    initStack(&stack);

    push(&stack, 10);//item[0]=10
    push(&stack, 20);//item[1]=20
    push(&stack, 30);//item[2]=30
    push(&stack, 40);
    push(&stack, 50);
    push(&stack, 60);//stack is  full!  cannot push 

    displayStack(&stack);
    pop(&stack);//40
    pop(&stack);//30
    pop(&stack);//20
    pop(&stack);//10
    displayStack(&stack);
    return 0;
}
