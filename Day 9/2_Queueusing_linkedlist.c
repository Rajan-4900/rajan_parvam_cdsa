#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Queue {
    struct Node *front,*rear;
};

struct Queue* CreateQueue(){
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

void enqueue(struct Queue* queue,int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(!newNode){
        printf("Memory allocation error\n");
        return;

    }
    newNode->data = value;
    newNode->next = NULL;
    if(queue->rear == NULL){
        queue->front = queue->rear = newNode;
    }else{
        queue->rear->next = newNode;
        queue->rear =newNode;
    }
        printf("Enqueued %d to the queue\n",value);
}
int dequeue(struct Queue* queue){
    if(queue->front == NULL){
        printf("Queue is Empty! cannot dequeue\n");
        return -1;
    }
    struct Node* temp = queue->front;
    int dequeuedvalue = temp->data;
    queue->front = queue->front->next;
    if(queue->front == NULL){
        queue->rear = NULL;
    }
    free(temp);
    printf("Dequeue %d from the queue\n",dequeuedvalue);
    return dequeuedvalue;
}

void displayQueue(struct Queue* queue){
    struct Node*temp = queue->front;
    if(queue->front == NULL){
        printf("Queue is Empty\n");
    }else{
        printf("Queue elements: ");
        while (temp != NULL){
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main(){
    struct Queue* queue = CreateQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    displayQueue(queue);

    dequeue(queue);
    displayQueue(queue);

    return 0;
}
