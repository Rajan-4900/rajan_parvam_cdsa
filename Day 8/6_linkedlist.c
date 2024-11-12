#include<stdio.h>
#include<stdlib.h>//coz  used malloc

//define a node in the linked list
typedef struct Node{
    int data; 
    struct Node*next;//nested
}Node;

// function to create a new node
Node* createNode(int value){//10
    Node* newNode=(Node*)malloc(sizeof(Node));
    newNode->data=value;//20
    newNode->next=NULL;//null =>10|add1 add1|20
    return newNode;
}

//function to insert a node at the end of the linked list
void append(Node** head, int value){
    Node*newNode=createNode(value);//10
    if(*head==NULL){  //if list is empty, set new node as head
        *head=newNode;//20
        return;
    }
    Node*temp=*head;
    while(temp->next!=NULL){//traverse to the end of the  list
        temp=temp->next;
    }
    temp->next=newNode;//link the new node at the end
}

void deleteNode(Node** head, int value){//1 20
    Node* temp=*head;//temp=1
    Node* prev=NULL;//prev=add of succesive prev node
    if (temp!=NULL && temp->data==value){//if head node has the value
        *head=temp->next;//head->2
        free(temp);//free(1)
        return;
    }    
    //traverse the list to find the node to delte
    while(temp!=NULL &&temp->data!=value){
        prev=temp;//prev=1
        temp=temp->next;//temp=null
    }

    if(temp==NULL){//Value not found
        printf("Value %d not found in the list.\n",value);
        return;
    }
    prev->next=temp->next;//Unlink the node
    free(temp);//free the memory
}

// function to display the linked list
void displayList(Node* head){
    Node* temp=head;
    printf("Linked List: ");
    while(temp!=NULL){//1!=NULL? T
        printf("%d-> ",temp->data);//10-> 20 ->30
        temp=temp->next;//1
    }
    printf("NULL\n");
}

//Main function to test the linked list operations
int main(){
    Node* head=NULL;

    append(&head, 10);//10
    append(&head, 20);// head value 20
    append(&head, 30);//30
    displayList(head);//Linked List: 10-> 20->30->NULL

    deleteNode(&head,20);//1 20
    displayList(head);//Linked LIst: 10->30->NULL

    deleteNode(&head,40);//value 40 not found int he list

    return 0;
}