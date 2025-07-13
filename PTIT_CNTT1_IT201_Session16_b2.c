#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct Node* next;
}Node;


typedef struct {
    Node* front;
    Node* rear;
}Queue;

Queue* createQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}
Node* createNode() {
    int value;
    printf("Enter Data: ");
    scanf("%d", &value);
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = value;
    node->next = NULL;
    return node;
}
void enqueue(Queue* queue) {
    Node* node = createNode();
    if (queue->rear == NULL) {
        queue->front = node;
        queue->rear = node;
    }else {
        queue->rear->next = node;
        queue->rear = node;
    }
}
void printQueue(Queue* queue) {
    Node* temp = queue->front;
    printf("Queue: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    Queue* queue = createQueue();
    enqueue(queue);
    enqueue(queue);
    enqueue(queue);
    printQueue(queue);
    return 0;
}

