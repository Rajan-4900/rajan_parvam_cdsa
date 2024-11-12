#include<stdio.h>

// Define a Queue structure
typedef struct{
    int data[5];//arr
    int front;
    int rear;
}Queue;
// initialize the queue
void initQueue(Queue *q){
    q->front = -1;
    q->rear = -1;
}
// check if the queue is empty
int isEmpty(Queue  *q){
    return q->front == -1;//2== -1
}
// check if the queue is full
int isFull(Queue *q){
    return q->rear == 4;// 0==4?
}
// add an element to the rear of the queue
void enqueue(Queue *q, int value){
    if (isFull(q)){
        printf("Queue overflow!\n");
        return;
    }
    if (isEmpty(q)){
        q->front = 0;
    }
    q->data[++q->rear] = value;//q->data[2]=3
}
// remove and return the front element from the queue
int dequeue(Queue *q){
    if (isEmpty(q)){
        printf("Queue underflow!\n");
        return -1;
    }
    int value = q->data[q->front];//data[0]

    //  if only one element was left, reset the queue
    if (q->front == q->rear){ //0 == 2
        q->front = -1;
        q->rear = - 1;
    }else{
        q->front++; //1
    }
    return value;
}
// peek at the front element without removing it
int peek(Queue *q){
    if (isEmpty(q)){
        printf("Queue is empty\n");
        return -1;
    }
    return q->data[q->front];//1
}
// print all elements in the queue
void printQueue(Queue *q){
    if(isEmpty(q)){
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue: ");
    for(int i = q->front; i <= q->rear; i++){ //0 2
        printf("%d", q->data[i]);//1 2 3
    }
    printf("\n");
}

int main(){
    Queue q;
    initQueue(&q);
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    printQueue(&q);//queue 1 2 3
    printf("Dequeued: %d \n", dequeue(&q));//dequeued:1
    printQueue(&q); //queue 2 3
    printf("Front: %d \n", peek(&q)); //front: 2
    enqueue(&q, 4);
    enqueue(&q, 5);
    enqueue(&q, 6); //"Queue overflow!"
    printQueue(&q); //Queue: 2 3 4 5
    return 0;
}